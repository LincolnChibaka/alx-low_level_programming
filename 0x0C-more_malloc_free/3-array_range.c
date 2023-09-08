#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers from min to max.
 * @min: The minimum value (inclusive).
 * @max: The maximum value (inclusive).
 *
 * Return: A pointer to the newly created array.
 * If min > max or if malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always returns 0.
 */

int main(void)
{
	int min = 1;
	int max = 5;

	int *result = array_range(min, max);

	if (result != NULL)
	{
		printf("Created array:\n");
		for (int i = 0; i <= (max - min); i++)
		{
			printf("%d ", result[i]);
		}
		printf("\n");

		free(result);
	}
	else
	{
		printf("Memory allocation failed or min > max.\n");
	}

	return (0);
}







