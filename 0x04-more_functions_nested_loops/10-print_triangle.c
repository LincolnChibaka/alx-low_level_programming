#include "main.h"

/**
 * print_triangle - Prints a triangle followed by a new line.
 * @size: The size of the triangle.
 *
 * Return: void.
 */
void print_triangle(int size)
{
	int a, l, x;
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (int a = 0; a <= size; i++)
	{
		for (int l = size - a; l > 1; l--)
		{
			_putchar(32);
		}

		for (int x = 0; x <= a; x++)
		{
			_putchar(35);
		}

		_putchar('\n');
	}
	}
}
