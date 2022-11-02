CC=gcc
CFLAGS=-I.
DEPS = hellomake.h eightqueens.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

hellomake: hellomake.o hellofunc.o eightqueens.o
	$(CC) -o hellomake hellomake.o hellofunc.o eightqueens.o
