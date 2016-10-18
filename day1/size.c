#include <stdio.h>

int main(void)
{
	puts("type\t\tsize(B)");

	printf("char\t\t%zd\n",   sizeof(char));
	printf("short\t\t%zd\n",   sizeof(short));
	printf("int\t\t%zd\n",   sizeof(int));
	printf("long\t\t%zd\n",   sizeof(long));
	printf("long long\t%zd\n", sizeof(long long));

	printf("long double\t%zd\n", sizeof(long double));

	printf("size_t\t\t%zd\n",   sizeof(size_t));
	printf("void *\t\t%zd\n",   sizeof(void *));
	printf("func *\t\t%zd\n",   sizeof(void (*)()));
}
