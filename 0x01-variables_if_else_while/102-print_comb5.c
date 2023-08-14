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
	int num1;
	int num2;

	for (num1 = 0; num1 <= 99; num1++)
	{
		for (num2 = num1; num2 <= 99; num2++)
		{
			if (num1 != num2)
			{
				putchar((num1 / 10) + '0');
				putchar((num1 % 10) + '0');
				putchar(' ');
				putchar((num2 / 10) + '0');
				putchar((num2 % 10) + '0');

				if (num1 != 98 || num2 != 99)
				{
					putchar(',');
					putchar(' ');

					if ((num1 * 100 + num2) % 15 == 0)
					{
						putchar('\n');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
