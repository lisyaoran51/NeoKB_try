
TARGET  = test
#compiler 
CC = g++
#cflags 
CFLAGS = -Wall -ansi -s
#object 
OBJS = NeoKB.o dma.o pwm.o ws2811.o mailbox.o pcm.o rpihw.o

all:$(TARGET)

$(TARGET): $(OBJS) 
	$(CC) $(OBJS) -o $@ 
	
.c.o:
	$(CC) $(CFLAGS) -c -o $@ $< 	
	
.cpp.o:
	$(CC) $(CFLAGS) -c -o $@ $< 
#all: NeoKB.o dma.o pwm.o ws2811.o mailbox.o pcm.o rpihw.o
#	g++ -o NeoKB NeoKB.o dma.o pwm.o ws2811.o mailbox.o pcm.o rpihw.o -Wall
#
#NeoKB.o: NeoKB.cpp NeoKB.h clk.h gpio.h dma.h pwm.h ws2811.h
#	g++ -c NeoKB.cpp 
#	#dma.o pwm.o ws2811.o
#
#dma.o: dma.c dma.h
#	g++ -c dma.c
#
#pwm.o: pwm.c pwm.h ws2811.h
#	g++ -c pwm.c 
#	#ws2811.o
#
#ws2811.o: ws2811.c pwm.c pcm.c ws2811.h mailbox.h clk.h gpio.h dma.h pwm.h pcm.h rpihw.h
#	g++ -c ws2811.c
#	#mailbox.o dma.o pwm.o pcm.o rpihw.o
#
#mailbox.o: mailbox.c mailbox.h
#	g++ -c mailbox.c
#
#pcm.o: pcm.c pcm.h
#	g++ -c pcm.c
#
#rpihw.o: rpihw.c rpihw.h
#	g++ -c rpihw.c

clean:
	rm -f *.o test