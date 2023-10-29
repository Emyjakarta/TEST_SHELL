#include "_shell_.h"

void _putchar(const char *message)
{
	write(FILE_DESCRIPTOR, message, strlen(message));
}
