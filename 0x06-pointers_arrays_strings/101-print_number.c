#include "main.h"
/**
 * print_number - Printing integer values only
 * @n: Integer variable to iterate through
 * Return: Nothing at this moment
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
