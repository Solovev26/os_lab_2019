CC=gcc
CFLAGS=-I.

all: client server
	
client: client.c fact
	$(CC) client.c fact.o -o client.exe

server: server.c fact
	$(CC) server.c fact.o -lpthread  -o server.exe

fact: fact.c fact.h
	$(CC) -c fact.c -o fact.o

clear:
	rm fact.o client.exe server.exe