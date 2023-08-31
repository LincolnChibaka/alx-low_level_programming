#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 *
 * @n: The input number for which the square root is to be calculated.
 *
 * Return: The natural square root of the number, or -1 if no natural
 * square root.
 */

int _sqrt_recursion(int n)
{
	int x = n;
	int y = 1;

	while (x > y)
	{
		x = (x + y) / 2;
		y = n / x;
	}
	return (x == y ? x : -1);
}
