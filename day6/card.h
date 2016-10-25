#include <stdlib.h>

struct card {
	int rank;
	// we use 9 because it's our longest string + null
	char suit [9];
};

void card_format(char output[], size_t sz, struct card c);
