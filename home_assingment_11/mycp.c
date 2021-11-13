#include "mycp.h"

#include <stdio.h>

int read_file (void *buff, const unsigned int size, FILE *rf){

/*переменная для хранения прочитаных байт*/	
	int read_b;	

/* если прочитанно меньше size проверяется флаг наличия ошибок*/
	if ( (read_b = fread (buff, 1, size, rf)) != size ){
		if (ferror (rf)){
			printf (" read file error\n");
			return -3;
		}
		return read_b;
	}
		
	return read_b;
}


int write_file (const void *buff, const int size, FILE *wf){

	if ( (fwrite (buff, 1, size, wf) ) != size){
		printf ("write file error\n");
		return -2;
	}
	return 0;
}

