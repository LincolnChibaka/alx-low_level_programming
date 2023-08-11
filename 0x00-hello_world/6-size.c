#include <stdio.h>

/**
 * main - Prints the size of various types on the computer
 *
 * Return: 0 for success
 */
int main(void)
{
/* Declare variables of different types */
char c;
int i;
long int li;
long long int lli;
float f;

/* Print the size of each type using the sizeof operator */
printf("Size of a char: %lu byte(s)\n", sizeof(c));
printf("Size of an int: %lu byte(s)\n", sizeof(i));
printf("Size of a long int: %lu byte(s)\n", sizeof(li));
printf("Size of a long long int: %lu byte(s)\n", sizeof(lli));
printf("Size of a float: %lu byte(s)\n", sizeof(f));

/* Return 0 to indicate success */
return (0);
}
