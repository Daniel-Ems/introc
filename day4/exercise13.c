#include <stdio.h>

int main(void)
{
	for(int count = 1; count <= 50; count++){
		if(count % 3 == 0){
			printf("Fizz");	
		}
		if(count % 5 == 0){
			printf("Buzz");
		} 
		if((count % 3 != 0) && (count % 5 !=0)){
			printf("%d", count);
		}
	printf("\n");
	}		
}
		 
