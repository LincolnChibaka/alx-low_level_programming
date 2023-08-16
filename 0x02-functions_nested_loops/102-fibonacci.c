#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long f1, f2, next;

	f1 = 1;
	f2 = 2;
	printf("%lu, %lu", f1, f2);
	for (i = 0; i < 48; i++)
	{
		next = f1 + f2;
		printf(", %lu", next);
		f1 = f2;
		f2 = next;
	}
	printf("\n");
	return (0);
}
