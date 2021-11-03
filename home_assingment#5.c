#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool Check_prime_number (unsigned int arg); /* retun true if digit is prime */

void main (void) {

	unsigned int N = 0 ; /* quantity Prime digit to print */
	unsigned int count = 0; /* count prime digit */
	unsigned int p = 3; /* count of all digit */
	
	printf ("Enter number of prime digit to print\n");
	//scanf ( "%u", &N);

/* check entered value correctness. Digit must be positive*/
	if ((scanf ( "%u", &N)) || N < 0 ) exit(EXIT_FAILURE);
	
	while (count < N) {
		if (Check_prime_number( p )){
		printf ( "%u\n", p);
		++count;
		++p;
		}
		else ++p;
	}
	exit(EXIT_SUCCESS);

}

bool Check_prime_number (unsigned int arg){
	bool Result = true;
	for (int i=2; i < arg; ++i){

		if (arg % i) Result = true;
		else {
			Result = false;
			break;
			}
	}
	return Result;
}

