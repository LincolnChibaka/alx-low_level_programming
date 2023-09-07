#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if successful
 */
int main(int argc, char **argv)
{
	(void)argc; /* tell the compiler to ignore argc */
	/* argv[0] contains the name or the path of the program file */
	printf("%s\n", argv[0]);
	return (0);
}
