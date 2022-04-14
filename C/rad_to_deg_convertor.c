#include <stdio.h>
#define PI 3.14159265

int main()
{	float rad;

	scanf("%f", &rad);
	
	float degree = rad * 180 / PI;
	printf("%f", degree);
}