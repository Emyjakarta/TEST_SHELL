#include "_shell_.h"

int main(void)
{
	char command[128];

	while (1)
	{
		show_prompt();
		browse_command(command, sizeof(command));
		_execute_command(command);
	}
	return (0);
}
