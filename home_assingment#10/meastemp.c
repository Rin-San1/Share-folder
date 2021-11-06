#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

#include "meastemp.h"



void fill_date (struct meas *t, const unsigned short int D){

/*никаких магических цифр, только константы*/
	const unsigned short int DAY_IN_YEAR = 360;
	const unsigned short int DAY_IN_MONTH = 30;
	
	unsigned short day =1;
	unsigned short month = 1;
	unsigned short year = 2021;

	for (int i =0; i < D; ++i){
		t[i].day = day + (i%DAY_IN_YEAR)%DAY_IN_MONTH;
		t[i].month = month + (i%DAY_IN_YEAR)/DAY_IN_MONTH;
		t[i].year = year + i/DAY_IN_YEAR;
	}	
}

void fill_temp(struct meas *t, const unsigned short int D){

/* аргумент для функции синуса, по которому считается температура */
	float arg;	 
	short int Ampl = 40;
	
	srand(time(NULL));

	for (int i=0; i < D; ++i){
		arg = ((float)i/180.0+1.0)*M_PI;
		t[i].temp =rand()%10-5+(short int)Ampl*cos(arg);
		
	}
}

int print_in_file (struct meas *t, const unsigned short int D, const char *filename){
	
	FILE *f;
	
	f = fopen( filename, "w+");
	if (f == NULL) return 1;	
	
	for (int i = 0; i < D; ++i){
		fprintf( f, "%hu.%hu.%hu:%hd\n",
				t[i].day,
				t[i].month,
				t[i].year,
				t[i].temp);
	}
	fclose(f);
	return 0;
}

