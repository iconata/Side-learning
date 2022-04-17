#include <stdio.h>
#include <stdlib.h>

void main(){
	float film_budget;
	int extras;
	float price_per_clothing;

	scanf("%f", &film_budget);
	scanf("%i", &extras);
	scanf("%f", &price_per_clothing);

	float decor_price = film_budget * 0.10;
	if (extras > 150){
		price_per_clothing *= 0.90;		// 10% discount
	}
	float total_cost = (extras * price_per_clothing) + decor_price;
	float money_left = abs(film_budget - total_cost);

	if (film_budget >= total_cost){
		printf("Action!\n");
		printf("Windgard start filming with %.2f leva left.\n", money_left);
	}
	else{
		printf("Not enough money!\n");
		printf("Windgard needs %.2f leva more.\n", money_left);
	}
}