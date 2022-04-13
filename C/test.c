#include <stdio.h>

void main(void)
{
	int i = 55;
	
	char c = "hello dude";

	int *pntr = &i;

	char *pointer = &c;

	printf("%p\n", pntr);

	printf("%p\n", pointer);
}