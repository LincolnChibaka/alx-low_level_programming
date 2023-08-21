#include <stdio.h>
#include "main.h"

/**
 * puts_half - Prints the second half of a string followed by a new line.
 * @str: Pointer to the string.
 *
 * Return: None.
 */
void puts_half(char *str)
{
	int length = 0;
	int start;

	/* Calculate the length of the string*/
	while (str[length] != '\0')
		length++;

	start = (length + 1) / 2; /* Calculate the starting index*/

	/* Print the second half of the string*/
	while (str[start] != '\0')
	{
		putchar(str[start]);
		start++;
	}

	putchar('\n');
}
