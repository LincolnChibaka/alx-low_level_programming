#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string
 * @str: a pointer to a string
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int i = 0;

	while (*str)
	{
		if (str && i % 2 == 0)
		{
			putchar(*str);
		}
		str++;
		i++;
	}
	putchar('\n');
}
