#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main ()
{
  pid_t child_pid;

  for (int i = 0; i < 5; i++)
  child_pid = fork (); //создаем дочерние процессы
    if (child_pid == 0) {
        exit(0); //завершаем дочерние процессы раньше родительского
    }
    else if (child_pid > 0)
        printf("Created a child process with the PID %d\n", child_pid);

    sleep(30);
    
  return 0;
}