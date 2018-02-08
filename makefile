CC=cc
CFLAGS=-g

main: main.o
	$(CC) main.o -lc -o main

clean:
	-@rm -f main
	-@rm -f main.o 
