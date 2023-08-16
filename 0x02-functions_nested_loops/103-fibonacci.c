#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int f1, f2, next, sum;

	f1 = 1;
	f2 = 2;
	sum = 0;
	while (f1 < 4000000)
	{
	if (f1 % 2 == 0)
	{
		sum += f1;
	}
	next = f1 + f2;
	f1 = f2;
	f2 = next;
	}
	printf("%d\n", sum);
	return (0);
}
