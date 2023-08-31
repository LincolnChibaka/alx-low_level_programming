#include "main.h"

/**
 * _sqrt_recursion_helper - Helper function to find the square
 * root recursively.
 *
 * @n: The number for which the square root is being calculated.
 * @i: The current value to check for square root.
 *
 * Return: The square root of n, or -1 if not a perfect square.
 */
int _sqrt_recursion_helper(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursion_helper(n, i + 1));
	}
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 *
 * @n: The number for which the square root is being calculated.
 *
 * Return: The square root of n, or -1 if n is negative.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursion_helper(n, 0));
	}
}
