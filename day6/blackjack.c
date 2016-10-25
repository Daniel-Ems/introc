#include <stdio.h>

#include "card.h"



int main (void)
{
	//the 2 of clubs
	//The initialization list is in the same order as the fields
	//in ther declaration of the struct
	struct card hole_card = { 14, "clubs"};

	char buf[32];

	card_format(buf, sizeof(buf), hole_card);
	
	puts(buf);
}
