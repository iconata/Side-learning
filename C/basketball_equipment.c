#include <stdio.h>

int main(){
	int year_tax;

	scanf("%d", &year_tax);

	float shoes = year_tax * 0.60;	// 40% less than year tax
	float clothes = shoes * 0.80;	// 20% less than shoes
	float ball = clothes * 0.25; 	// 1/4 of the price of clothes
	float accesories = ball * 0.20; // 1/5 of the price of ball

	float total_cost = year_tax + shoes + clothes + ball + accesories;
	printf("%.2f", total_cost);
}