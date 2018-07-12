VPATH=aaa:bbb

all:test

test:main.o
	g++ -o test main.o
	
main.o:main.cpp aaa.h bbb.h
	g++ -c main.cpp



