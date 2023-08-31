#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to compute the square root of
 *
 * Return: the natural square root of n if it exists, -1 otherwise
 */
int _sqrt_recursion_helper(int n, int i);

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

/**
 * _sqrt_recursion_helper - helper function for computing the
 * square root of a number
 * @n: the number to compute the square root of
 * @i: the current guess for the square root
 *
 * Return: the natural square root of n if it exists, -1 otherwise
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

