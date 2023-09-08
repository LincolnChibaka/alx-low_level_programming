#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_digit - checks if a string is composed of digits
 * @str: string to check
 *
 * Return: 1 if true, 0 if false
 */
int is_digit(char *str)
{
	int i; /* loop index */

	/* check each character in the string */
	for (i = 0; str[i] != '\0'; i++)
	{
		/* if not a digit, return 0 */
		if (!isdigit(str[i]))
			return (0);
	}

	/* return 1 if all digits */
	return (1);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	int num1, num2, res;

	/* if the number of arguments is incorrect */
	if (argc != 3)
	{
		/* print Error and exit with status 98 */
		printf("Error\n");
		exit(98);
	}

	/* convert the arguments to integers using atoi */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (!is_digit(argv[1]) || !is_digit(argv[2]))
	{
		/* print Error and exit with status 98 */
		printf("Error\n");
		exit(98);
	}

	/* multiply the two numbers */
	res = num1 * num2;

	/* print the result followed by a new line */
	printf("%d\n", res);

	/* return 0 on success */
	return (0);
}
