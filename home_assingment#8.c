#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* функция заполняет массив случайными числам. Элементы массива принимают значения 0-100 */
void get_array (int A[], int N);

/* функция сортирует по возрастанию. Я использовал алгоритм сортировки вставками*/
void sort_array (int A[], int N);

void print_array (int A[], int N);

void main (void){

/* "N" количество элементов масива */
	int N = 0; 
	
	printf ( "Enter array elements quantity\n");
	scanf ("%d", &N);
	
	int A [N];
	
	get_array ( A, N);	
	print_array( A, N);
	sort_array ( A, N);
	printf ("sorted array\n");
	print_array( A, N);
	
	
	
}
	
	

void get_array (int *A, int N){

	srand (time(NULL)); 
	
	for(int i=0; i<N; ++i) {
		A[i] = rand()%100;
	}
}
		
void print_array (int *A, int N){

	for(int i=0; i<N; ++i){
		printf("%03d\n", A[i]);
	}
		
}

void sort_array (int A[], int N){

	int buff=0;
	
	for (int i=1; i<N; ++i){
		for ( int j=0; j<=i-1; ++j){
			if ( A[j] > A[i]){
				buff = A[j];
				A[j] = A[i];
				A[i] = buff;
			}
		}
	}

}



