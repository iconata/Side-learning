# include <stdio.h>

void main(){
	float trip_price;
	int puzzles;
	int talking_dolls;
	int stuffed_bears;
	int minions;
	int trucks;
	float final_profit = 0;

	scanf("%f", &trip_price);
	scanf("%d", &puzzles);
	scanf("%d", &talking_dolls);
	scanf("%d", &stuffed_bears);
	scanf("%d", &minions);
	scanf("%d", &trucks);

	int total_toys = puzzles + talking_dolls + stuffed_bears + minions + trucks;
	float total_profit = (puzzles * 2.60) + (talking_dolls * 3.00) + (stuffed_bears * 4.10) + (minions * 8.20) + (trucks * 2.00);

	if (total_toys >= 50){
		final_profit = total_profit * 0.75;		// discount 25%
		final_profit *= 0.90;		// 10% tax for rent
	}
	else{
		final_profit = total_profit * 0.90;		// 10% tax for rent
	}
	if (total_profit >= trip_price){
		float money_left = final_profit - trip_price;
		printf("Yes! %.2f lv left.", money_left);
	}
	else{
		float money_left = trip_price - final_profit;
		printf("Not enough money! %.2f lv needed.", money_left);
	}
}