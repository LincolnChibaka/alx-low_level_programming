#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <sys/syscall.h>

#define STDERR_FILENO 2

void custom_print(const char *str) 
{
syscall(SYS_write, STDERR_FILENO, str, strlen(str));
}

int main() 
{
const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
custom_print(message);
return 1;
}
