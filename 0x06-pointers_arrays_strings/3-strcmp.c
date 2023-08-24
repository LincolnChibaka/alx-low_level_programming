#include "main.h"

/**
 * _strcmp - A function that compares two strings
 * @s1: First string
 * @s2: Second string
 *
 * Description: This function compares the str pointed to by s1 and s2.
 * It returns an integer less than, equal to, or greater than zero
 * if s1 is found,respectively, to be less than, to match, or be
 * greater than s2.
 *
 * Return: An integer less than, equal to, or greater than zero.
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	if (s1 == s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
	return (0);
}
