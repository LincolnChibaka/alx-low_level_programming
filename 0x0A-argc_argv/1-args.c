#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;  /* Unused variable to silence compiler warning */

	printf("%d\n", argc - 1);

	return (0);
}
