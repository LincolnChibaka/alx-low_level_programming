#include <unistd.h>
#include <string.h>
#include <sys/syscall.h>

#define STDERR_FILENO 2

/**
 * custom_print - Writes a string to the standard error file descriptor
 *                using syscall
 * @str: The string to be printed
 */
void custom_print(const char *str)
{
syscall(SYS_write, STDERR_FILENO, str, strlen(str));
}

/**
 * main - Entry point of the program
 *
 * Return: Always 1 (Exit status)
 */
int main(void)
{
const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

custom_print(message);
return (1);
}
