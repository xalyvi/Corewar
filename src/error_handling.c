#include "corewar.h"
#include <stdio.h>
#include <errno.h>

void    terminate(char *str)
{
    if (errno == 0)
        ft_putendl_fd(str, 2);
    else
        perror(str);
    exit(1);
}