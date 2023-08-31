#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 *
 * @n: The input number for which the factorial is to be
 * calculated.
 *
 * Return: The factorial of the number, or -1 if n is negative.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1); /* Base case: factorial of 0 is 1 */

	return (n * factorial(n - 1));
}
