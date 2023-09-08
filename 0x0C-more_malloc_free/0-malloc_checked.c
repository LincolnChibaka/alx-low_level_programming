#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to allocate.
 *
 * Return: A pointer to the allocated memory.
 * If malloc fails, the program exits with status value 98.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b); /* Allocate memory using malloc */

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr); /* Return the pointer to the allocated memory */
}


/**
 * main - Entry point of the program.
 *
 * Return: Always returns 0.
 */

int main(void)
{
	unsigned int size = 100;
	void *allocated_memory = malloc_checked(size);

	/* Use the allocated memory here */

	free(allocated_memory);
	return (0);
}
