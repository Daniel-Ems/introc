#include <stdio.h>

int main(void)
{
	int a = 5, b = 10, tot, total;
	double x = 25.5, y = 20,add, mult;
	tot = a + b;
	total = a * b;
	add = x + y;
	mult = x * y;
	printf("%d+%d is %d\n", a,b,tot);
	printf("%d*%d is %d\n", a,b,total);
	printf("%f+%f is %f\n", x,y,add);
	printf("%f*%f is %f\n", x,y,mult);
}
