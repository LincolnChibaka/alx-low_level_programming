#include "main.h"
/**
 * rev_string - The art of reversing arrays
 * @n: integer parameter variable
 * Return: 0 upon successful execution
 */
void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}
}

/**
 * infinite_add - Adding complex numbers
 * @n1: 1st number to add
 * @n2: 2nd number to add
 * @r: pointer to buffer
 * @size_r: Size of the buffer
 * Return: The pointer to be  called
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int y = 0, i = 0, j = 0, digits = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || y == 1)
	{
		if (i < 0)
			val1 = 0;
		else
			val1 = *(n1 + i) - '0';
		if (j < 0)
			val2 = 0;
		else
			val2 = *(n2 + j) - '0';
		temp_tot = val1 + val2 + y;
		if (temp_tot >= 10)
			y = 1;
		else
			y = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_tot % 10) + '0';
		digits++;
		j--;
		i--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
