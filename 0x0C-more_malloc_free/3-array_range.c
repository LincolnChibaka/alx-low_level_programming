#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum value in the array
 * @max: maximum value in the array
 *
 * Return: pointer to the newly created array, or NULL if it fails
 */
int *array_range(int min, int max)
{
	int *array; /* pointer to hold the new array */
	int i; /* loop index */
	int size; /* size of the array */

	/* if min > max, return NULL */
	if (min > max)
		return (NULL);

	/* calculate the size of the array */
	size = max - min + 1;

	/* allocate memory for the array using malloc */
	array = malloc(size * sizeof(int));

	/* check if allocation failed */
	if (array == NULL)
		return (NULL);

	/* fill the array with values from min to max */
	for (i = 0; i < size; i++)
		array[i] = min + i;

	/* return the pointer to the new array */
	return (array);
}
