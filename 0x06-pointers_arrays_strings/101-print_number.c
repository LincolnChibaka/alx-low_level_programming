#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to be printed
 *
 * Return: nothing
 */
void print_number(int n)
{
	unsigned int j = n;

	if (n < 0)
	{
		_putchar(45);
		j = -j;
	}
	if (j / 10)
	{
		print_number(j / 10);
	}
	_putchar(j % 10 + '0');
}
