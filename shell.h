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
char *_strncpy(char *dest, char *src, int n);
char *_strncat(char *dest, char *src, int n);
char *_strchr(char *str, char c);


#endif /* SHELL_H */
