#include <stdio.h>

int main(int argc, char *argv[])
{
	if(argc == 3){
			

	FILE *fp1 = fopen(argv[1], "r");
	FILE *fp2 = fopen(argv[2], "r"); 
	

	char c1, c2;

	while (( c1 != EOF) && (c2 != EOF) && (c1 == c2)){
		c1 = getc(fp1);
		c2 = getc(fp2); 
		printf("%c and %c\n", c1, c2);

	}
		
	
	//char buf [128];
	//fgets(buf ,sizeof(buf), fp2);
	//printf("%s", buf);
	
	//fgets(buf, sizeof(buf), fp1);
	//printf("%s", buf);
	
	
	}

	
} 
