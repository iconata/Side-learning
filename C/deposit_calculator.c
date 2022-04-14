#include <stdio.h>

int main(){
	float deposited_sum;
	int deposit_lenght;
	float apy;

	scanf("%f", &deposited_sum);
	scanf("%d", &deposit_lenght);
	scanf("%f", &apy);

	float result = deposited_sum + (deposit_lenght * ((deposited_sum * (apy / 100)) / 12));
	printf("%.2f\n", result);
}