#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "general_structs.h"

#define FOREVER for(;;)
#define INPUT_LEN 30

int main()
{
    char command[INPUT_LEN];
    char *func;
    int i;
    int t;

    FOREVER
    {
        if(scanf("%s", command) == 1)
        {
            func = strtok(command, " ");
            for(i=0;cmd[i].func != NULL;i++)
            {
                if(strcmp(func, cmd[i].name) == 0)
                {
                    (*((cmd[i].func)));
                    t = 1;
                }
            }
            if(t == 1)
            {
                printf("No such command");
            }
        }
    }   
    return 0;   
}
