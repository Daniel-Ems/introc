#include <stdio.h>
#include <math.h>

double  quadratic_formula_one(double a, double b, double c);

int main(void)
{

	double a = 3, b = 4, c = 1, y;
	y = quadratic_formula_one(a,b,c);
	printf("%.10lf\n", y);
}


double quadratic_formula_one(double a, double b, double c)
{	
	return (-b + pow((b*b) - (4 * a * c), .5))/(2 *a ); 
	 
}
