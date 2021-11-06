# include <stdio.h>

# include "meastemp.h"

void main (void){
	
	char filename[] = "measerments.txt";

	/* колличество дней */
	const unsigned short int D = 360;		
	struct meas t[D] ;
	
	fill_date (t, D);	
	fill_temp (t, D);
	
	if (print_in_file (t, D, filename)) printf( "unable to make file\n");
	/*
	for (int i =0; i < D; ++i){
		printf("D:%hu M:%hu Y:%hu T:%hd\n",
			t[i].day,
			t[i].month,
			t[i].year,
			t[i].temp);
	}
	*/

}

