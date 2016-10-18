#include <stdio.h>

int right_triangle(int a, int b,int c);

int main(void)
{
	int a = 4, b = 4, c = 5;  
	c = right_triangle(a,b,c);
	printf("%d\n",c ); 
}

int right_triangle(int a,int b,int c)
{	
	a *= a;
	b *= b;
	c *= c;
	if(c == a+b){
	return(1);}
	else{ return(0);
			}
}

