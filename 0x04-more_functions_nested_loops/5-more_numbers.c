#include "main.h"

/**
 * more_numbers - Prints numbers 10 times from 0 to 14.
 *
 * Return: void.
 */
void more_numbers(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar('0' + j / 10);
			}
			_putchar('0' + j % 10);
		}
		_putchar('\n');
	}
}
