#include <stdio.h>
/**
 * main - Prints the lowercase alphabet, then uppercase alphabet,
 * followed by a newline using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase;
	char uppercase;

	/* Print lowercase alphabet */
	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}

	/* Print uppercase alphabet */
	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	{
		putchar(uppercase);
	}

	/* Print newline */
	putchar('\n');

	return (0);
}

