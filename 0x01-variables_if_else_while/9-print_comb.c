#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers.
 *              Numbers are separated by a comma and a space.
 *              Numbers are printed in ascending order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int number;

    /* Print possible combinations of single-digit numbers */
    for (number = 0; number < 10; number++)
    {
        putchar('0' + number);

        if (number < 9)
        {
            putchar(',');
            putchar(' ');
        }
    }

    putchar('\n');

    return (0);
}
