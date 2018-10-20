all: sieve.o main.o
	gcc sieve.o main.o -lm

sieve.o: sieve.h sieve.c
	gcc -c sieve.c

main.o: main.c sieve.h
	gcc -c main.c

run:
	./a.out