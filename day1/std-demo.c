#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>


int main (void)
{	
	int64_t alfa = 97;
	
	// This will give us a warning
	printf("%" PRId64 "\n", alfa);
}
