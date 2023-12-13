#include "shell.h"
/*
 *
 */

int main(void) {
    char input_cmd[150];

    while (true) {
        my_prompt();
        cmd_input(input_cmd, sizeof(input_cmd));
        cmd_execute(input_cmd);
    }





    

    return 0;
}
