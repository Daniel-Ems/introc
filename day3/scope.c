#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int WARMING = 76;

int iterator(void);

int main(void)

{
	int value = iterator();
	
	printf("%d\n", value);
	
	value = iterator();
	printf("%d\n", value);

	value = iterator();
	printf("%d\n", WARMING);
}
int iterator(void)
{
	static int x = 0;
	x += 1; 

	return x; 
	
}

