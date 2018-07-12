VPATH=aaa:bbb

all:test

test:Main.o
	g++ -o test main.o
	
main.o:Main.cpp aaa.h bbb.h
	g++ -c Main.cpp



