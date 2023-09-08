#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to allocate
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p; /* pointer to hold the allocated memory */

	/* allocate memory using malloc */
	p = malloc(b);

	/* check if allocation failed */
	if (p == NULL)
	{
		/* terminate the process with status 98 */
		exit(98);
	}

	/* return the pointer to the allocated memory */
	return (p);
}
