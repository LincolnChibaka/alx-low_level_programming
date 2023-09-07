#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * coin_count - calculates the number of coins for a given value
 * @cents: pointer to the amount of cents
 * @value: the value of the coin
 * Return: the number of coins
 */
int coin_count(int *cents, int value)
{
	int coins;

	/* Calculate the number of coins for the value */
	coins = *cents / value;
	/* Update the remaining cents */
	*cents %= value;
	/* Return the number of coins */
	return (coins);
}

/**
 * main - prints the minimum number of coins to make change
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if success, 1 if error
 */
int main(int argc, char *argv[])
{
	int cents, coins;

	/* Check if the number of arguments is exactly 1 */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	/* Convert the argument to an integer using atoi */
	cents = atoi(argv[1]);

	/* Check if the number is negative */
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	/* Initialize the number of coins to zero */
	coins = 0;

	/* Call the coin_count function for each coin value and add to the total */
	coins += coin_count(&cents, 25);
	coins += coin_count(&cents, 10);
	coins += coin_count(&cents, 5);
	coins += coin_count(&cents, 2);
'	coins += coin_count(&cents, 1);

	/* Print the minimum number of coins followed by a new line */
	printf("%d\n", coins);

	return (0);
}
