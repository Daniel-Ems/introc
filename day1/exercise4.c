#include <stdio.h>

int sum_of_squares(int a, int b);

int main(void)
{
	int a = 5, b = 10, c;
	c = sum_of_squares(a,b);
	printf("(a*a) + (b*b) =  %d\n",c); 
}

int sum_of_squares(int a,int b)
{	
	a *= a;
	b *= b;
	return (a + b);
}
	

	
	
