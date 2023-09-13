#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_arg - Prints a string using printf
 * @arg: The string to be printed
 */
void print_arg(char *arg)
{
	printf("%s\n", arg);
}
