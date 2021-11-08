#include <stdio.h>
#include <stdbool.h>

/*функция считывает массив из stdin и возращает колличество считаных цифр и символов "+, -, /, *" */
int get_str (char *str);

/* добавляет младший разряд к числу "num" из символа */
void get_num ( char str, float *num );

float calc ( float res, float num2, char math_action);

void main ( void ){
	
/* перменная хранит размер строки, полученный от get_str*/
	int n = 0;
	
	char str[100];	
	char math_action;
	char ch;

	float res = 0;
	float num2 = 0;
	
/* флаг указыает какую переменную подавать на вход функции "get_num" */
	bool second_num = false;
	
/* Флаг показывает что мат. операция  в переменной math_action ожидает исполнения */
	bool prev_op = false;
	

	printf ("enter numbers to calculate\n");

	n = get_str ( str);
	
	for (int i=0; i <= n ; ++i){
	
/* тернальный оператор используется, чтоб первое число записать в переменную res, все последующие числа записываются в переменную num2 */.
		if ( str[i] >= '0' && str[i] <= '9') get_num ( *(str+i), (second_num ? &num2 : &res) );
		
/* Условие (str[i] == '\0') Необходимо, чтоб выполнить последнне действие лежащее в "math_action" */		
		if ( ( str[i] >= '*' && str[i] <= '/' ) || (str[i] == '\0' ) ){
			second_num = true;
			
			prev_op = (math_action ? true : false);
				
			if (prev_op){
				res = calc ( res, num2, math_action);
				num2 = 0;
				}
			math_action = str[i];
			}

		}
	
	printf("result is %.2f\n", res);
	
}


int get_str (char *str){
	
	char ch;
	int i=0;
	
	while( (ch = getchar()) != '\n'){
		if ( ch >= '*' && ch <= '9'){
			if ( ch == ',' || ch == '.') continue;
			*(str + i) = ch;
			++i;
			}
		/* чтоб не превысить размер масива в 100 символов */	
		if ( i == 99) break;
		}
	str[i] = '\0';
	return i;
	}
	
void get_num (char str, float *num ){

	*num = *(num)*10 + (str - '0');
		
	}  
	
float calc ( float res, float num2, char math_action){
	
	switch (math_action){
		case '*':
			res *= num2;
			break;
		case '+':
			res += num2;
			break;
		case '-':
			res -= num2;
			break;
		case '/':
			res /= num2;
			break;
	}
	
	return res;
}

