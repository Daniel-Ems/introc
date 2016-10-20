#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void copy_string(char dst[], char src[]);
int main(void)
{
	char name [64];
	

	printf( "Please enter your name: ");
	// TODO: Check results of fgets
	fgets(name, sizeof(name), stdin);
	
	size_t len = strlen(name);
	name[len - 1] = '\0';
	
	printf("%s is smelly\n", name);

	//-1, 0, 1
	// name < "stephen"
	// 0 name == "stephen"
	// 1 name > "stephen"
	if(0 == strncmp(name, "Stephen", sizeof(name))) {
	  puts("Learn to phucking spell stupid");
	  }
	// TODO: check return value
	strncat(name,"head", sizeof(name) - len);
		
	printf("%s, %s, is a stupid %s\n", name, name, name);
	
	char buff[64];
	//TODO: check the return value
	snprintf(buff, sizeof(name), "PFC %s", name);
	strncpy(name, buff, sizeof(name));
	printf("Ha, ha, %s is so dumb \n", buff);
}

void copy_string(char dst[], char src[])
{
	for(size_t n = 0; n < strlen(src); ++n) {
      dst[n] = src[n];
	}
	

}


