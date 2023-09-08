#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: pointer to the destination memory area
 * @src: pointer to the source memory area
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
void *_memcpy(void *dest, void *src, unsigned int n)
{
	unsigned int i; /* loop index */

	/* copy n bytes from src to dest */
	for (i = 0; i < n; i++)
	{
		((char *)dest)[i] = ((char *)src)[i];
	}

	/* return pointer to dest */
	return (dest);
}

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes, of the new memory block
 *
 * Return: pointer to the new memory block, or NULL if it fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr; /* pointer to the new memory block */

	/* if new_size is equal to zero, and ptr is not NULL */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr); /* free ptr */
		return (NULL); /* return NULL */
	}

	/* if ptr is NULL */
	if (ptr == NULL)
	{
		/* call is equivalent to malloc(new_size) */
		return (malloc(new_size));
	}

	/* if new_size is equal to old_size */
	if (new_size == old_size)
	{
		/* do not do anything and return ptr */
		return (ptr);
	}

	/* allocate memory for the new block */
	new_ptr = malloc(new_size);
	/* check if allocation failed */
	if (new_ptr == NULL)
	{
		return (NULL); /* return NULL */
	}

	/* copy the contents from the old block to the new block using _memcpy */
	_memcpy(new_ptr, ptr, old_size < new_size ? old_size : new_size);

	/* free the old block */
	free(ptr);

	/* return the pointer to the new block */
	return (new_ptr);
}

