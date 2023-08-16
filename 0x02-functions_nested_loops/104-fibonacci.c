#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Declare and initialize the variables for the current Fibonacci number */
	unsigned int f1h = 0;
	unsigned int f1l = 1;
	unsigned int f2h = 0;
	unsigned int f2l = 2;

	/* Declare the variables for the next Fibonacci number */
	unsigned int nexth, nextl;

	/* Declare the variable for the carry */
	unsigned int carry;

	/* Print the first two Fibonacci numbers */
	printf("%u, %u", f1l, f2l);

	/* Iterate 96 times */
	int i;

	for (i = 0; i < 96; i++)
	{
		/* Add the current Fibonacci number using the split method */
		nextl = f1l + f2l;
		carry = nextl / 1000000;
		nexth = f1h + f2h + carry;
		nextl = nextl % 1000000;

		/* Update the current Fibonacci number */
		f1h = f2h;
		f1l = f2l;
		f2h = nexth;
		f2l = nextl;

		/* Print the next Fibonacci number with a comma and a space */
		printf(", %u%06u", nexth, nextl);
	}

	/* Print a new line */
	printf("\n");
	return (0);
}

