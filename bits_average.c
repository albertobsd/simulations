/*
	
	This program fill "rounds" times a 32 bytes buffer (256 bits) with random data from /dev/urandom
	in each round the program count the amount of bit that are in 1 or ON inside the buffer
	The output is the sumary  of times that each number of bit was filled and its percentage.
	In general the amount of times that the program fill 128 bits in 1 is near of the 5%
	The other bits are also near of that percentage but in a decending way.
	
	LICENSE: "Commons Clause" License Condition v1.0
	
	See the LICENSE file for more details
	
	email: alberto.bsd <at> gmail.com
	
	compilation: 
	gcc -o bits_average bits_average.c
*/

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <inttypes.h>

// Change the raounds value here
#define rounds 1000000
#define bytes_buffer 32

int countbitsone(uint8_t *buffer, int length);

//This is a small table for fast bit count
                                     /*0 1 2 3 4 5 6 7 8 9 A B C D E F*/
uint8_t one_counter[256] =	/*0000 0*/{0,1,1,2,1,2,2,3,1,2,2,3,2,3,3,4,
							/*0001 1*/ 1,2,2,3,2,3,3,4,2,3,3,4,3,4,4,5,
							/*0010 2*/ 1,2,2,3,2,3,3,4,2,3,3,4,3,4,4,5,
							/*0011 3*/ 2,3,3,4,3,4,4,5,3,4,4,5,4,5,5,6,
							/*0100 4*/ 1,2,2,3,2,3,3,4,2,3,3,4,3,4,4,5,
							/*0101 5*/ 2,3,3,4,3,4,4,5,3,4,4,5,4,5,5,6,
							/*0110 6*/ 2,3,3,4,3,4,4,5,3,4,4,5,4,5,5,6,
							/*0111 7*/ 3,4,4,5,4,5,5,6,4,5,5,6,5,6,6,7,
							/*1000 8*/ 1,2,2,3,2,3,3,4,2,3,3,4,3,4,4,5,
							/*1001 9*/ 2,3,3,4,3,4,4,5,3,4,4,5,4,5,5,6,
							/*1010 A*/ 2,3,3,4,3,4,4,5,3,4,4,5,4,5,5,6,
							/*1011 B*/ 3,4,4,5,4,5,5,6,4,5,5,6,5,6,6,7,
							/*1100 C*/ 2,3,3,4,3,4,4,5,3,4,4,5,4,5,5,6,
							/*1101 D*/ 3,4,4,5,4,5,5,6,4,5,5,6,5,6,6,7,
							/*1110 E*/ 3,4,4,5,4,5,5,6,4,5,5,6,5,6,6,7,
							/*1111 F*/ 4,5,5,6,5,6,6,7,5,6,6,7,6,7,7,8};

int main()	{
	FILE *fd;
	int bits[257] = {0};	// enough space from [0 to 256]
	int i,r;
	char buffer_random[bytes_buffer];
	
	fd = fopen("/dev/urandom","rb");	/* *Nix OS dependent */
	if(fd == NULL)	{
		fprintf(stderr,"error\n");
		exit(0);
	}
	
	for (i = 0; i < rounds; i++)	{
		fread((uint8_t*)buffer_random,1,bytes_buffer,fd);
		r = countbitsone(buffer_random,32);
		bits[r]++;
	}
	for (i = 0; i <= 256; i++)	{
		if(bits[i] > 0)
			printf("%i times %i bits in 1,  this is %f \n",bits[i],i,(float)bits[i]/(float)rounds);
	}
}

int countbitsone(uint8_t *buffer, int length)	{
	int i = 0,r = 0;
	while(i < length)	{
		r += one_counter[buffer[i]];
		i++;
	}
	return r;
}
