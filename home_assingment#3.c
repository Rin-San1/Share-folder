# include <stdio.h>
# include <math.h>

int main (void)
{
	float R; // Radius
	float P, S, V; //Perimeter, Square, Volum
	printf ("Enter radius of circle\n");
	if( !(scanf ( "%f", &R)) || (R < 0)){
		printf( "error\n");
		return -1;
	}
	P = 2*M_PI*R;
	S = M_PI*R*R;
	V = 4/3*M_PI*R*R*R;
	printf ("Perimetr %5.2f\n Square %5.2f\n Volume %5.2f\n", P, S, V);
	return 0;





}
