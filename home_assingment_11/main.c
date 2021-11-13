#include "mycp.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char **argv){
	
/* Буффер для храннения прочитанной информации */
	char buff [1024] = {0};
/*Колличество прочитанных байт. На случай если прочитано меньше чем 1024*/
	int read_b = sizeof (buff);
/*указатели на файл источник и файл цель*/
	FILE *rf, *wf;
	fpos_t *pos;

	if (argc < 3){
		printf("incorrect input values\n");
		return (EXIT_FAILURE);
	}
	
	if( (rf = fopen (argv[1], "rb")) == NULL){
		printf ("unable open source file\n");
		return (EXIT_FAILURE);
	}
	
	if( (wf = fopen (argv[2], "wb")) == NULL){
		printf ("unable open target file\n");
		fclose (rf);
		return (EXIT_FAILURE);
	}
	
	while (!feof (rf)){
		
		if ((read_b = read_file ( buff, sizeof(buff), rf)) < 0){
			printf ("error read file\n");
			fclose (rf);
			fclose (wf);
			return (EXIT_FAILURE);
		}	
		
		if ( (write_file (buff, read_b, wf)) != 0){
			printf ("error in write file\n");
			fclose (rf);
			fclose (wf);
			return (EXIT_FAILURE);
		}
	}
	fclose (rf);
	fclose (wf);
	
	return (EXIT_SUCCESS);
	
}	
