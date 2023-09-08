#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array and initializes it
 * to zero.
 * @nmemb: The number of elements in the array.
 * @size: The size (in bytes) of each element.
 *
 * Description:
 * This function allocates memory for an array of `nmemb` elements,
 * each of `size` bytes. It initializes the allocated memory to zero.
 * The total memory allocated is `nmemb * size` bytes.
 *
 * Return: A pointer to the allocated and initialized memory.
 * If `nmemb` or `size` is 0, or if `malloc` fails, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	/* Initialize the allocated memory to zero */
	memset(ptr, 0, total_size);

	return (ptr);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always returns 0.
 */
int main(void)
{
	unsigned int nmemb = 5;
	unsigned int size = sizeof(int);

	int *arr = (int *)_calloc(nmemb, size);

	if (arr != NULL)
	{
		printf("Allocated and initialized array:\n");
		for (unsigned int i = 0; i < nmemb; i++)
		{
			printf("%d ", arr[i]);
		}
		printf("\n");
		free(arr);
	}
	else
	{
		rintf("Memory allocation failed.\n");
	}

	return (0);
}
