#include <stdio.h>

void main(){
	int nylon;
	int paint;
	int thinner;
	int hours;

	scanf("%d", &nylon);
	scanf("%d", &paint);
	scanf("%d", &thinner);
	scanf("%d", &hours);

	// 2 sqm of nylon extra, just in case + 10% paint increase + 0.40 c for packaging bags
	float total_sum = ((nylon + 2) * 1.50) + ((paint * 1.1) * 14.50) + (thinner * 5) + 0.40;
	float workers_pay = (total_sum * 0.30) * hours;
	float final_sum = total_sum + workers_pay;
	printf("%.2f", final_sum);
}