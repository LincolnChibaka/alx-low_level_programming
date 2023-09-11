#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from
 *
 * Return: 0 on success
 */
int main(void)
{
	/* Use the predefined macro __FILE__ to get the file name */
	printf("%s\n", __FILE__);
	return (0);
}
