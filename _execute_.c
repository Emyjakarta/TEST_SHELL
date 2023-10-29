#include "_shell_.h"

void _execute_command(const char *command)
{
	pid_t _child_pid = fork();

	if (_child_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (_child_pid == 0)
	{
		execlp(command, command, (char *)NULL);
		perror("execlp");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}
