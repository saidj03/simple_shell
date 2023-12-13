#include "shell.h"

/**
  *cmd_execute - function that executes a command
  *@input_cmd: the main command to be executed
  *Return: Always success.
  */
void cmd_execute(const char *input_cmd)
{
	pid_t baby_pid = fork(); /*create a child process*/

	if (baby_pid == -1)
	{
	perror("fork");
	exit(EXIT_FAILURE);
	}
	else if (baby_pid == 0)
	{
	/*Child process*/
	execlp(input_cmd, input_cmd, (char *)NULL);
	perror("execlp");
	exit(EXIT_FAILURE);
	}
	else
	{
	/*Parent process*/
	wait(NULL);
	}
}



