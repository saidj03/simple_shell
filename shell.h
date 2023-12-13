#ifndef SHELL_H
#define SHELL_H
/*
 *prototypes and macros
 */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdbool.h>
#include <sys/wait.h>
#include <string.h>


/*
 *main functions
 */
void my_prompt(void);
void cmd_input(char *input_cmd, size_t size);
void cmd_execute(const char *input_cmd);
void func_print(const char *test_str);




#endif /* SHELL_H */
