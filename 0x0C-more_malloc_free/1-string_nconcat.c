#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatenate from s2
 *
 * Return: pointer to the new string, or NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str; /* pointer to hold the new string */
	unsigned int len1, len2; /* lengths of s1 and s2 */
	unsigned int i, j; /* loop indices */

	/* if NULL is passed, treat it as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* get the lengths of s1 and s2 */
	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	/* allocate memory for the new string using malloc */
	new_str = malloc((len1 + n + 1) * sizeof(char));

	/* check if allocation failed */
	if (new_str == NULL)
		return (NULL);

	/* copy s1 to the new string */
	for (i = 0; i < len1; i++)
		new_str[i] = s1[i];

	/* copy n bytes from s2 to the new string */
	for (j = 0; j < n; j++)
		new_str[i + j] = s2[j];

	/* add a null character at the end of the new string */
	new_str[i + j] = '\0';

	/* return the pointer to the new string */
	return (new_str);
}
