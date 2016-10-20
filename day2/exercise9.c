#include <stdio.h>
//#include <stdbool.h>
int main(void)
{
	int i = 18;
	while(i<60){
		i += 2 ;
		printf(" %d\t", i);
		int j = 1, k = 1;
		while ((j<i)){
			j = i*i;
			printf(" %d\t", j);
			while(k<i){
				k = i*i*i;
				printf(" %d\t ",k);
			}
		}
	printf("\n");	
	} 
}
