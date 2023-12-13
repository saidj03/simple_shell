#include "shell.h"

/**
  *func_print - function to print strings
  *@test_str: the string to be printed
  *Return: Always success.
  */

void func_print(const char *test_str)
{
	write(STDOUT_FILENO, test_str, strlen(test_str));
}


