#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * generate_random_char - Generates a random character within a given range.
 * @min_char: Minimum character value.
 * @max_char: Maximum character value.
 *
 * Return: Random character.
 */
char generate_random_char(char min_char, char max_char)
{
	return (min_char + rand() % (max_char - min_char + 1));
}

/**
 * generate_password - Generates a random password.
 * @password: Pointer to the password buffer.
 * @length: Length of the password.
 */
void generate_password(char *password, int length)
{
	const char lowercase_letters[] = "abcdefghijklmnopqrstuvwxyz";
	const char uppercase_letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	const char digits[] = "0123456789";
	const char special_characters[] = "!@#$%^&*()";
	char all_characters[256];
	strcpy(all_characters, lowercase_letters);
	strcat(all_characters, uppercase_letters);
	strcat(all_characters, digits);
	strcat(all_characters, special_characters);

	int total_characters = strlen(all_characters);

	for (int i = 0; i < length; i++)
	{
		password[i] = all_characters[rand() % total_characters];
	}

	password[length] = '\0';
}

int main(void)
{
	srand(time(NULL));

	int password_length = 12;
	char password[password_length + 1];

	generate_password(password, password_length);
	printf("Generated Password: %s\n", password);

	return (0);
}
