VPATH=aaa:bbb
#compiler 
CC = g++
#cflags 
CFLAGS = -Wall -ansi -s
#object 
OBJS = Main.o

all:test

test: $(OBJS) 
	$(CC) $(OBJS) -o $@ 
#test:Main.o
	#g++ -o test Main.o
	

.c.o:
	$(CC) $(CFLAGS) -c -o $@ $< 	
	
.cpp.o:
	$(CC) $(CFLAGS) -c -o $@ $< 
#main.o:Main.cpp aaa.h bbb.h
#	g++ -c Main.cpp

