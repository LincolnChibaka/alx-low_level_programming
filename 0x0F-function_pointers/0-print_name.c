#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_name - Prints a name
 * @name: Name to print
 * @f: Function pointer to print name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
	return (0);
}
