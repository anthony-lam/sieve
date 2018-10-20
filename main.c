#include "sieve.h"
#include <math.h>
#include <stdio.h>

int main(){
	printf("The 10th prime number:\n");
	printf("%ld\n", sieve(10));
	printf("The 100th prime number:\n");
	printf("%ld\n", sieve(100));
	printf("The 1000th prime number:\n");
	printf("%ld\n", sieve(1000));
	printf("The 10000th prime number:\n");
	printf("%ld\n", sieve(10000));
	printf("The 100000th prime number:\n");
	printf("%ld\n", sieve(100000));
	printf("The 1000000th prime number:\n");
	printf("%ld\n", sieve(1000000));
	
	//printf("%ld\n", sieve(1000000));;
	return 0;
}