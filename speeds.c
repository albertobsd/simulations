/*

This program show the amount of time need to crack a specific bit range acording to some predefined speeds.

This program was made to know the amount of time needed to scan a bit range for the bitcoin puzzles.

LICENSE: "Commons Clause" License Condition v1.0

See the LICENSE file for more details

email: alberto.bsd <at> gmail.com

twitter: @albertobsd

compilation:
gcc -o speeds speeds.c -lgmp

*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <gmp.h>
#include <string.h>

#define TOTAL 12

#define N_ 7


char *puzzle[TOTAL] = {"64","68","120","125","130","135","140","145","150","155","160","256"};	
char *puzzle_sr[TOTAL] = {"8000000000000000","100000000000000000","800000000000000000000000000000","10000000000000000000000000000000","200000000000000000000000000000000","4000000000000000000000000000000000","80000000000000000000000000000000000","1000000000000000000000000000000000000","20000000000000000000000000000000000000","400000000000000000000000000000000000000","8000000000000000000000000000000000000000","8000000000000000000000000000000000000000000000000000000000000000"};
char *puzzle_er[TOTAL] = {"ffffffffffffffff","1FFFFFFFFFFFFFFFFF","FFFFFFFFFFFFFFFFFFFFFFFFFFFFFF","1FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF","3FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF","7FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF","FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF","1FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF","3FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF","7FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF","FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF","FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFEBAAEDCE6AF48A03BBFD25E8CD0364141"};
char *speed[N_] = {"1000000","1000000000","1000000000000","1000000000000000","1000000000000000000","1000000000000000000000","1000000000000000000000000"};
char *speedname[N_] = {"Megakeys/s","Gigakeys/s","Terakeys/s","Petakeys/s","Exakeys/s","Zettakeys/s","Yottakeys/s"};
char *speeds10[N_] = {"10^6","10^9","10^12","10^15","10^18","10^21","10^24"};

int main(int argc, char **argv)	{
	mpz_t r,r1,a,b,c;
	int i,j;
	mpz_init(a);
	mpz_init(b);
	mpz_init(c);
	mpz_init(r);
	mpz_init(r1);
	for(i = 0; i < TOTAL; i++) {
		mpz_set_str(a,puzzle_sr[i],16);	// a = lower limit or start range example: 8000000000000000
		mpz_set_str(b,puzzle_er[i],16);	// b = upper limit or end range example:   ffffffffffffffff
		for(j = 0 ; j < N_ ; j++)	{
			mpz_set_str(c,speed[j],10);	//	c = Speed : tested keys in one second
			mpz_sub(r1,b,a);	// r1 = b - a
			
			mpz_fdiv_q(r,r1,c); // (b-a) / c 
			mpz_fdiv_q_ui(c,r,31536000);	// 31536000 seconds in one year
			gmp_printf("Puzzle %s @ 1 %s  (%s):\t%Zd years\n",puzzle[i],speedname[j],speeds10[j],c);
		}
	}
}
