#include "main.h"

/**
 * _sqrt_helper - Helper function to perform binary search for square
 * root.
 *
 * @n: The input number for which the square root is to be calculated.
 * @start: The lower bound for binary search.
 * @end: The upper bound for binary search.
 *
 * Return: The natural square root of the number, or -1 if no natural
 * square root.
 */
int _sqrt_helper(int n, int start, int end)
{
	int mid = (start + end) / 2;

	if (mid * mid == n)
		return (mid); /* Square root found */

	if (start >= end)
		return (-1); /* No natural square root found */

	if (mid * mid > n)
		/* Search in the left half */
		return (_sqrt_helper(n, start, mid - 1));
	/* Search in the right half */
	return (_sqrt_helper(n, mid + 1, end));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 *
 * @n: The input number for which the square root is to be calculated.
 *
 * Return: The natural square root of the number, or -1 if no natural square
 * root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1); /* Return -1 for negative n as error indicator */

	if (n == 0 || n == 1)
		/* Base case: square root of 0 or 1 is the number itself */
		return (n);

	/* Call helper function with initial bounds */
	return (_sqrt_helper(n, 1, n));
}
