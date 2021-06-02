  
CC=gcc
CFLAGS=-I.
 
all: udpserver udpclient tcpserver tcpclient  

udpclient : 
	$(CC) -o udpclient  udpclient.c $(CFLAGS)

tcplient : 
	$(CC) -o tcplient   tcplient.c $(CFLAGS)

udpserver : 
	$(CC) -o udpserver  udpserver.c $(CFLAGS)

tcpserver : 
	$(CC) -o tcpserver  tcpserver.c $(CFLAGS)

clean :
	rm tcpserver udpserver tcpclient udpclient