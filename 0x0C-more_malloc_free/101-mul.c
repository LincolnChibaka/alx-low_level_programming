#include <stdio.h>
#include <stdlib.h>

/**
 * is_positive_integer - Checks if a string is a positive integer.
 * @str: The string to check.
 *
 * Return: 1 if the string is a positive integer, 0 otherwise.
 */
int is_positive_integer(const char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	char *num1 = argv[1];
	char *num2 = argv[2];

	if (!is_positive_integer(num1) || !is_positive_integer(num2))
	{
		printf("Error\n");
		return (98);
	}

	int int_num1 = atoi(num1);
	int int_num2 = atoi(num2);

	int result = int_num1 * int_num2;

	printf("%d\n", result);

	return (0);
}
