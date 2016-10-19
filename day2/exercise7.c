#include <stdio.h>

int main(void)
{
	int i = 0;
	int j = 0;
	for(i=1; i<=7; i++){
		for(j = i; j >= 1; j--){
			printf("%d ", j);
		}
		printf("\n");
	}
}
