#include <stdio.h>

/**
 * main - Prints all alphabetic letters except 'q' and 'e',
 * followed by a newline using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter;

    /* Print all alphabetic letters except 'q' and 'e' */
    for (letter = 'a'; letter <= 'z'; letter++)
    {
        if (letter != 'q' && letter != 'e')
        {
            putchar(letter);
        }
    }

    /* Print newline */
    putchar('\n');

    return (0);
}
