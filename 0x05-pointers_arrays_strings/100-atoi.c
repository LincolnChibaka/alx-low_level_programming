#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string to be converted.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int sign = 1; /* To store the sign of the number*/
	int result = 0;

	/* Handle leading '+' and '-' signs*/
	while (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign *= -1;
		s++;
	}

	/* Convert string to integer*/
	while (*s >= '0' && *s <= '9')
	{
		/* Check for overflow before updating the result*/
		if (result > INT_MAX / 10 || (result == INT_MAX /
		10 && *s - '0' > INT_MAX % 10))
		{
			if (sign == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}

		result = result * 10 + (*s - '0');
		s++;
	}

	return (result * sign);
}
