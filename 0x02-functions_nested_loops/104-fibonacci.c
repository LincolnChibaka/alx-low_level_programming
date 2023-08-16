#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count = 1; /* Count of Fibonacci numbers (starting with 1 and 2)*/
	int fib1 = 1;  /*First Fibonacci number*/
	int fib2 = 2;  /*Second Fibonacci number*/

	printf("%d, ", fib1);
	printf("%d", fib2);

	while (count < 98)
	{
		/* Calculate the next Fibonacci number*/
		int next_fib = fib1 + fib2;

		printf(", ");
		printf("%d", next_fib);

		/*Move the values forward in the sequence*/
		fib1 = fib2;
		fib2 = next_fib;

		count++;
	}

	printf("\n"); /*Print a new line at the end*/

	return (0);
}
