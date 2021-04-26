CC=gcc
CFLAGS=-I.
 
all: process_memory parallel_min_max  

process_memory : 
	$(CC) -o process_memory -c -std=c99 process_memory.c

parallel_min_max : utils.o find_min_max.o lab4.1/utils.h lab4.1/find_min_max.h
	$(CC) -o parallel_min_max utils.o find_min_max.o -std=c99 lab4.1/parallel_min_max.c $(CFLAGS)

utils.o : lab4.1/utils.h
	$(CC) -o utils.o -c -std=c99 lab4.1/utils.c $(CFLAGS)

find_min_max.o : lab4.1/utils.h lab4.1/find_min_max.h
	$(CC) -o find_min_max.o -c -std=c99 lab4.1/find_min_max.c $(CFLAGS)

clean :
	rm lab4.1/utils.o lab4.1/find_min_max.o lab4.1/parallel_min_max process_memory.o process_memory 