#include "main.h"

/**
 * print_times_table - Prints the n times table.
 * @n: The value for which times table is to be printed.
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
	int row, col, product;

	for (row = 0; row <= n; row++)
	{
		for (col = 0; col <= n; col++)
		{
			product = row * col;

		if (col != 0)
		{
			_putchar(',');
			_putchar(' ');
		}

		if (product < 10)
		{
			_putchar(' ');
			_putchar(' ');
		}
		else if (product < 100)
		{
			_putchar(' ');
			_putchar((product / 10) + '0');
		}
		else
		{
			_putchar((product / 100) + '0');
			_putchar(((product / 10) % 10) + '0');
		}

			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
	}
}
