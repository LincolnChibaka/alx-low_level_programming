#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to be printed
 *
 * Return: nothing
 */
void print_number(int n)
{
	int i, j, k, d;

	if (n < 0) /*check if the number is negative*/
	{
		_putchar('-'); /*print a minus sign*/
		n = -n; /*make the number positive*/
	}

	i = 1; /*initialize a variable to store the power of 10*/
	j = n; /*initialize a variable to store the number*/

	while (j > 9) /*loop until the number is less than 10*/
	{
		i = i * 10; /*multiply the power of 10 by 10*/
		j = j / 10; /*divide the number by 10*/
	}

	while (i > 0) /*loop until the power of 10 is zero*/
	{
		k = n / i; /*get the quotient of the power of 10*/
		d = k % 10; /* get the remainder of the quotient and 10*/
		_putchar(d + '0'); /* print the digit as a character*/
		i = i / 10; /*divide the power of 10 by 10*/
	}
}
