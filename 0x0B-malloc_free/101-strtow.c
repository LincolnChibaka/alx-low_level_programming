#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * is_space - Checks if a character is a space, tab, or newline.
 * @c: The character to check.
 *
 * Return: 1 if the character is a space, tab, or newline; 0 otherwise.
 */
int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
	int i, count = 0;

	for (i = 0; str[i]; i++)
		if (!is_space(str[i]) && (is_space(str[i + 1]) || !str[i + 1]))
			count++;

	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words), or NULL if it fails.
 */
char **strtow(char *str)
{
	int i, j, k, len;
	char **words;

	if (!str || !*str)
		return (NULL);

	words = malloc((count_words(str) + 1) * sizeof(char *));
	if (!words)
		return (NULL);

	for (i = 0, j = 0; str[i]; i++)
		if (!is_space(str[i]))
		{
			len = 0;
			for (k = i; str[k] && !is_space(str[k]); k++)
				len++;

			words[j] = malloc((len + 1) * sizeof(char));
			if (!words[j])
				return (NULL);

			for (k = 0; k < len; k++)
				words[j][k] = str[i + k];
			words[j][len] = '\0';
			j++;
			i += len;
		}

	words[j] = NULL;
	return (words);
}
