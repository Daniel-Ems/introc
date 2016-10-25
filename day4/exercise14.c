#include <stdio.h>

int main(void)
{
	int age = 0, citizenship = 0;

	printf("Please tell me how old you are: ");
	scanf("%d", &age);
	

	printf("Now tell us how long you hvae been a citizen: ");
	scanf("%d", &citizenship);

	printf("%d %d\n", age, citizenship );

	if((age >= 35) && (age == citizenship)){
		printf("You can be a Senator, Representative, OR El Presidente\n");
	}
	else if((age >= 30) && (citizenship >= 9)){
		printf("Senator, or Rep.. Your Good. But you won't ever be el jefe\n");
	}
	else if((age>=25) && (citizenship >=7)){
		printf("You are only worthy of being a Representative\n");
	}
	else{
		printf("You literally got to America yesterday\n");
	}
	
}
