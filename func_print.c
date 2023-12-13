#include "shell.h"

void func_print(const char *test_str) {
    write(STDOUT_FILENO, test_str, strlen(test_str));
}


