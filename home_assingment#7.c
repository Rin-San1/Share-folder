#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/* write input to X, Y,R. check correctnes of values */
bool get_user_input(float *X, float *Y, float *R);

bool is_target_hit(float X, float Y, float R);

void main (void){

	float X = 0;
	float Y = 0;
	float R = 0;
	
	if (get_user_input( &X, &Y, &R )){
	
		printf ( "%s\n", (is_target_hit( X, Y, R) ? "Point is belong the circle" : "Point don't belong the circle"));
		exit(EXIT_SUCCESS);
		}
		
	else {
	
		printf( "Entered incorrect values\n" );
		exit(EXIT_FAILURE);
		}

}

bool get_user_input(float *X, float *Y, float *R){

	printf ( "Enter coordinates (X,Y) and radius (R) of circle\n" );
	
	if ( 3 == scanf ("%f %f %f", X, Y, R) ){
	
		if ( *R <= 0 ){
		
			printf ( "incorect value of Radius\n" );
			return false ;			
			}
			
		else return true ;
		}
	
	else {
	
		printf ( "Error read values\n" );
		return false ;
		}
		
}

bool is_target_hit(float X, float Y, float R){

	return ((X*X + Y*Y) < R*R) ? true : false ;
	
}
	
