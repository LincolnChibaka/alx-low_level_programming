#include "main.h"

/**
 * _strncpy - Copy at most n characters from the src str into the dest str.
 * @dest: Pointer to the destination character array.
 * @src: Pointer to the source character array.
 * @n: Maximum number of characters to be copied.
 *
 * Description: This function copies at most n characters from the string
 * pointed to by src into the str pointed to by dest. If the length of src
 * is less than n, the remaining characters in dest are filled with null bytes.
 * If the length of src is greater than or equal to n, no null-termination is
 * added to dest. Returns a pointer to the resulting string dest.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;
	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
