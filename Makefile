all: NeoKB.cpp NeoKB.h clk.h gpio.h dma.h pwm.h ws2811.h
	g++ -c NeoKB.cpp

dma.o: dma.c dma.h
	g++ -c dma.c

pwm.o: pwm.c pwm.h ws2811.h
	g++ -c pwm.c

ws2811.o: ws2811.c ws2811.h mailbox.h clk.h gpio.h dma.h pwm.h pcm.h rpihw.h
	g++ -c ws2811.c

mailbox.o: mailbox.c mailbox.h
	g++ -c mailbox.c

pcm.o: pcm.c pcm.h
	g++ -c pcm.c

rpihw.o: rpihw.c rpihw.h
	g++ -c rpihw.c