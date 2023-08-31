#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line.
 *
 * @s: The input string to be printed.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	/* Print a newline when the end of string is reached */
		_putchar('\n');
		return;
	}

	_putchar(*s); /* Print the current character */
	/* Recursively call the function with the next character */
	_puts_recursion(s + 1);
}
