#include <stdio.h>

int main(){
	float usd_amount;
	
	scanf("%f", &usd_amount);

	float exch_rate = 1.79549;

	float sum =  usd_amount * exch_rate;

	printf("%f", sum);
}