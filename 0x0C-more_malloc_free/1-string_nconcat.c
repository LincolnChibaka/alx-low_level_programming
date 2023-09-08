#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the newly allocated concatenated string.
 * If allocation fails or if n is greater or equal to the length
 * of s2, return NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *result;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	result = malloc(len1 + n + 1); /* +1 for the null terminator */

	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		result[i] = s2[j];

	result[i] = '\0'; /* Null-terminate the concatenated string */

	return (result);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always returns 0.
 */

int main(void)
{
	char s1[] = "Hello, ";
	char s2[] = "world!";
	unsigned int n = 5;

	char *concatenated = string_nconcat(s1, s2, n);

	if (concatenated != NULL)
	{
		printf("Concatenated string: %s\n", concatenated);
		free(concatenated);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}

	return (0);
}

