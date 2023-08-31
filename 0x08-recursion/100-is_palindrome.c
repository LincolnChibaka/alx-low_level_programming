#include <stddef.h>
#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome.
 *
 * @s: The input string to be checked.
 *
 * Return: 1 if palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	if (s == NULL)
		return (0); /* Null string is not a palindrome*/

	int length = 0;

	while (s[length] != '\0')
		length++; /* Calculate the length of the string*/

	return (check_palindrome(s, 0, length - 1));
}

/**
 * check_palindrome - Helper function to check palindrome recursively.
 *
 * @s: The input string to be checked.
 * @start: The starting index for checking palindrome.
 * @end: The ending index for checking palindrome.
 *
 * Return: 1 if palindrome, 0 if not.
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		/* Base case: characters matched or crossed, palindrome*/
		return (1);

	if (s[start] != s[end])
		return (0); /* Characters mismatch, not a palindrome*/

	/* Check next characters*/

	return (check_palindrome(s, start + 1, end - 1));
}
