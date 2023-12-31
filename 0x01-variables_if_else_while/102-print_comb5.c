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
	int n1, n2;

	for (n1 = 0; n1 < 100; n1++)
	{
		for (n2 = n1 + 1; n2 < 100; n2++)
		{
			putchar((n1 / 10) + '0');
			putchar((n1 % 10) + '0');
			putchar(' ');
			putchar((n2 / 10) + '0');
			putchar((n2 % 10) + '0');

			if (n1 != 98 || n2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
