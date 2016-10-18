#include <stdio.h>

int main(void)
{
	int able = 2, baker = 3, charlie = 5;

	printf("%d\n", able);
	printf("%d\n", baker);
	printf("%d\n", charlie);

	printf("a+b = %d\n", able + baker);

	charlie += 2; // charlie = charlie + 2
	// no exponential arithmetic
	printf("c%%b = %d\n", charlie % baker);
	printf("c%%a = %d\n", charlie % able);
	 
	float xray = 3.1, yankee = 0.00000041, zulu = 590000;

	
	printf("%.10f\n", xray);
	printf("%.10f\n", yankee);
	printf("%.10f\n", zulu);  

	puts("doubles");
	double  xrayd = 3.1, yankeed = 0.00000041, zulud = 590000;
	printf("%.10lf\n", xrayd);
	printf("%.10lf\n", yankeed);
	printf("%.10lf\n", zulud);
	
	xray  += 2; // charlie = charlie + 2
		
	printf("%.10f\n", zulu + yankee);
}
