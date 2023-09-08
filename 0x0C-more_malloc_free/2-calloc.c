#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements in the array
 * @size: size of each element in bytes
 *
 * Return: pointer to the allocated memory, or NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr; /* pointer to hold the allocated memory */
	unsigned int i; /* loop index */

	/* if nmemb or size is 0, then _calloc returns NULL */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* allocate memory using malloc */
	ptr = malloc(nmemb * size);

	/* check if allocation failed */
	if (ptr == NULL)
		return (NULL);

	/* set the memory to zero using char pointer */
	for (i = 0; i < nmemb * size; i++)
		((char *)ptr)[i] = 0;

	/* return the pointer to the allocated memory */
	return (ptr);
}
