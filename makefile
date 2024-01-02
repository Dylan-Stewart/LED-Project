# build an executable
all: MYLIGHTSLIB.o Blink.c
	gcc -c MYLIGHTSLIB.o MYLIGHTSLIB.c -L /usr/local/lib -lbcm2835
	gcc -o Blink Blink.c MYLIGHTSLIB.o -L /usr/local/lib -lbcm2835
clean:
	$(RM) MYLIGHTSLIB.o
	$(RM) Blink
