CC=gcc

all: sequential_min_max parallel_min_max EXECVL

utils.o: utils.h
	$(CC) -o utils.o -c -std=c99 utils.c

find_min_max.o: utils.h find_min_max.h
	$(CC) -o find_min_max.o -c -std=c99 find_min_max.c

sequential_min_max: utils.h find_min_max.h utils.o find_min_max.o
	$(CC) find_min_max.o utils.o sequential_min_max.c -o sequential_min_max 

parallel_min_max: utils.h find_min_max.h utils.o find_min_max.o
	$(CC) utils.o find_min_max.o -std=c99 parallel_min_max.c -o parallel_min_max

execvl.o:
	$(CC) -c execvl.c -o execvl.o

EXECVL: execvl.o
	$(CC) execvl.o -o EXECVL

clean:
	rm *.o
