#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int main()
{
    pid_t pid = fork();
    
    if(pid < 0)
    {
        printf("Can\'t create fork\n");
        return 1;
    }
    else if(pid == 0)
    {
        execl("sequential_min_max", "sequential_min_max", "411", "1000", NULL);
    }

    wait(NULL);
    return 0;
}
