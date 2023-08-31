#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 *
 * @s: The input string to be printed in reverse.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	/* Recursively call the function with the next character */
	_print_rev_recursion(s + 1);
	_putchar(*s); /* Print the current character */
}

