#include <stdio.h>

int main(void)
{
	
	int start = 1;	
	for(start = 1; start < 5000; start++){
		int total = 0;
		for(int number = start; total < 10000; number++){
			total += number;
		}if (total == 10000){
			for(int numbers = start; total > 0;){
				printf("%d\n", numbers);
				total -= numbers;
				numbers++;
			
			}
		}
	}
}



//i want counter, counter + 1, counter + 2, etc to == 10000


