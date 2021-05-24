#include <errno.h>
#include <pthread.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

int numb = 0;

void some_func(int*);


pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

int main()
{
  pthread_t thread;

  if (pthread_create(&thread, NULL, (void*)some_func, (void*)&numb) != 0)
  {
    perror("\nERROR in pthread_create\n\n");
    exit(1);
  }

  if (pthread_join(thread, NULL) != 0) 
  {
    perror("\nERROR in pthread_join\n\n");
    exit(1);
  }
  
  printf("\nnumb = %i;\n\n", numb);

  return 0;
}

void some_func(int* number)
{
  int work;

  pthread_mutex_lock(&mutex);

  work = *number;
  work++;

  pthread_mutex_lock(&mutex);

  work++;
  *number = work;

  pthread_mutex_unlock(&mutex);
  pthread_mutex_unlock(&mutex);
}