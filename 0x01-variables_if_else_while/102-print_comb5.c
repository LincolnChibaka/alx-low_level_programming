#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two two-digit numbers.
 *              Numbers range from 0 to 99.
 *              The combination of numbers is separated by comma and a space.
 *              Combinations are printed in ascending order.
 *              00 and 01 are considered the same combination as 01 and 00.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number1;
	int number2;

	/* Print possible combinations of two two-digit numbers */
	for (number1 = 0; number1 <= 99; number1++)
	{
		for (number2 = number1; number2 <= 99; number2++)
		{
			putchar((number1 / 10) + '0');
			putchar((number1 % 10) + '0');
			putchar(' ');
			putchar((number2 / 10) + '0');
			putchar((number2 % 10) + '0');

			if (number1 != 98 || number2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
