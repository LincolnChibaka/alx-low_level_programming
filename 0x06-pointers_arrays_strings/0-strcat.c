#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to destination character array.
 * @src: Pointer to source character array.
 *
 * Description: This function appends the string pointed to by src to the
 * string pointed to by dest, overwriting the terminating null byte ('\0') at
 * the end of dest, and then adds a new null byte.
 *
 * Return: Pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
