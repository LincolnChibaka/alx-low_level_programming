#include "main"

/**
 * _strncat - Concatenate two strings, taking at most n bytes from src.
 * @dest: Pointer to destination character array.
 * @src: Pointer to source character array.
 * @n: Maximum number of bytes to concatenate from src.
 *
 * Description: This function appends at most n characters from the string
 * pointed to by src to the string pointed to by dest. The result is null-
 * terminated.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}

	y = 0;
	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
