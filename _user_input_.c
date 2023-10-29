#include "_shell_.h"

void browse_command(char *command, size_t size)
{
	if (fgets(command, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			_putchar("\n");
			exit(0);
		}
		else
		{
			_putchar("Error while reading input.\n");
			exit(1);
		}
	}
	command[strcspn(command, "\n")] = '\0';
}
