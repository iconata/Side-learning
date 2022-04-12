#include <stdio.h>

int main(void)
{	int i;
	char c[30];

	scanf("%s", c);
	if (sizeof(c) <= 3)
	{
		printf("%s", c);
	}
	else
	{
		for (i; i < 30; i++)
	{
		printf("%s", c[i]);
	}}
	printf("Hello, %s", c);
}