#include "shell.h"

/**
  *cmd_input - function to input commands
  *@input_cmd: the command to be input
  *@size: size of the input command
  *Return: Always success
  */

void cmd_input(char *input_cmd, size_t size)
{
	if (fgets(input_cmd, size, stdin) == NULL)
	{
	if (feof(stdin))
	{
		func_print("\n");
		exit(EXIT_SUCCESS);
	}
	else
	{
		func_print("Input command error.\n");
		exit(EXIT_FAILURE);
	}
	}
	input_cmd[strcspn(input_cmd, "\n")] = '\0'; /*Remove newline*/
}
