#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/* функция возвращает true если число простое */
bool Check_prime_number (unsigned int arg); 

void main (void) {

/* Колличество простых чисел которое надо вывести */
	int N = 0 ;

/*Счетчик для всех чисел*/
	unsigned int count = 1;
	
/*Счетчик для простых чисел*/
	unsigned int p = 0; 
	
	printf ("Enter number prime digit to print\n");

/* Проверка правильности ввода числа*/
	if ( !(scanf ( "%d", &N)) || N < 0 ){
		printf("Read error\n");	
		exit(EXIT_FAILURE);
	}
	
	while (p < N) {
		if (Check_prime_number( count )){
		printf ( "%u\n", count);
		++count;
		++p;
		}
		else ++count;
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

