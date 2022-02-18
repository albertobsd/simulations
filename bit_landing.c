/*
	
	This program fill "rounds" times a 32 bytes buffer (256 bits) with random data from the RNG
	of libgmp in each round the program count the size in bits that are needed for each number 
	The output is the sumary  of times that each number landing in some bit range and its percentage.
	In general the amount of times that the key lands in 256 bits is near of the 50%
	all decrementing bits are the half of the previous value
	
	LICENSE: "Commons Clause" License Condition v1.0
	
	See the LICENSE file for more details
	
	email: alberto.bsd <at> gmail.com
	
	compilation: 
	gcc -o bit_landing bit_landing.c -lgmp
*/

#include <gmp.h>
#include <time.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <inttypes.h>

// Change the raounds value here
#define rounds 1000000

int main()	{
	mpz_t key;
	gmp_randstate_t state;
	int bits[257] = {0};	// enough space from [0 to 256]
	int i,r;
	mpz_init(key);
	
	
	gmp_randinit_default(state);
	gmp_randseed_ui(state,time(NULL));
	
	for (i = 0; i < rounds; i++)	{
		mpz_urandomb(key,state,256);
		r = mpz_sizeinbase(key,2);
		bits[r]++;
	}
	for (i = 0; i <= 256; i++)	{
		if(bits[i] > 0)
			printf("%i times with lengt %i bits,  this is %f \n",bits[i],i,(float)bits[i]/(float)rounds);
	}
}