VPATH=../try:aaa:bbb

all:test

test:main.o
	g++ -o test main.o
	
main.o:main.c aaa.h bbb.h
	g++ -c main.c



