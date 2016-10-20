#include <stdio.h>

int main(void)
{
	int i = 7, c;
	while(i >= 1){
		c = 1;
		while(c <= i){
			printf(" %d ", c);
			c++;
		}
		printf("\n");
		i--;
	}
}
