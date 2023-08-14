#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of three digits.
 *              Numbers are separated by a comma and a space.
 *              The three digits must be different.
 *              012, 120, 102, 021, 201, 210 are considered the same
 *             combination.
 *              Only the smallest combination is printed.
 *              Numbers are printed in ascending order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1, n2, n3;

	for (n1 = 0; n1 <= 7; n1++)
	{
		for (n2 = n1 + 1; n2 <= 8; n2++)
		{
			for (n3 = n2 + 1; n3 <= 9; n3++)
			{
				putchar(n1 + '0');
				putchar(n2 + '0');
				putchar(n3 + '0');

				if (n1 != 7 || n2 != 8 || n3 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
