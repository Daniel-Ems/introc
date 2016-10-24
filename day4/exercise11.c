#include <stdio.h>

int main(void)
{
	
	int counter = 1, factor =1 ;
	while(counter < 10){
		counter ++;
		factor = factor * counter;
		printf("%d\n", factor);
	}
}

