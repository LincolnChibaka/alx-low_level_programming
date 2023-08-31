#include "main.h"

/**
 * is_prime_number - Checks if a number is prime.
 *
 * @n: The input number to be checked.
 *
 * Return: 1 if prime, 0 if not prime.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	/* Numbers less than or equal to 1 are not prime*/
		return (0);

	/*Call the helper function with initial divisor*/
	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - Helper function to check primality.
 *
 * @n: The input number to be checked.
 * @divisor: The divisor to be used for checking primality.
 *
 * Return: 1 if prime, 0 if not prime.
 */
int is_prime_helper(int n, int divisor)
{
	if (divisor > n / 2)
		/* If no divisor is found, the number is prime*/
		return (1);

	if (n % divisor == 0)
		/* If a divisor is found, the number is not prime*/
		return (0);

	/* Check with the next divisor*/
	return (is_prime_helper(n, divisor + 1));
}
