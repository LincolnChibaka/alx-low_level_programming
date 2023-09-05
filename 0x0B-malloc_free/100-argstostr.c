#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments into a single string.
 * @ac: The number of arguments.
 * @av: An array of strings (arguments).
 *
 * Return: A pointer to the concatenated string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *concatenated;
	int i, j, k, total_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			total_len++;
		total_len++;  /* Add 1 for the newline character */
	}

	concatenated = (char *)malloc((total_len + 1) * sizeof(char));

	if (concatenated == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			concatenated[k++] = av[i][j];
		concatenated[k++] = '\n';
	}

	concatenated[k] = '\0';

	return (concatenated);
}
