# include <stdio.h>
# include <math.h>

int main (void)
{
	unsigned int R; // Radius can't be negative
	float P, S, V; //Perimeter, Square, Volum
	printf ("Enter radius of circle\n");
	scanf ( "%u", &R);
	P = 2*M_PI*R;
	S = M_PI*R*R;
	V = 4/3*M_PI*R*R*R;
	printf ("Perimetr %5.2f\n Square %5.2f\n Volume %5.2f\n", P, S, V);
	return 0;





}
