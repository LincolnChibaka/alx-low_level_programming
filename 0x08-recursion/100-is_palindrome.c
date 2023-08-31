#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (is_palindrome_helper(s, len, 0));
}

/**
 * is_palindrome_helper - helper function for checking
 * if a string is a palindrome
 * @s: the string to check
 * @len: the length of the string
 * @i: the current index
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s, int len, int i)
{
	if (i >= len / 2)
	{
		return (1);
	}
	else if (s[i] != s[len - i - 1])
	{
		return (0);
	}
	else
	{
		return (is_palindrome_helper(s, len, i + 1));
	}
}
