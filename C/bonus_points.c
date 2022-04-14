#include <stdio.h>

void main(){
	int number;
	float bonus_points = 0;

	scanf("%d", &number);

	if (number <= 100){
		bonus_points += 5;
	}
	else if (number < 1000){
		bonus_points += number * 0.20;
	}
	else{
		bonus_points += number * 0.10;
	}
	if (number % 10 == 5){
		bonus_points += 2;
	}
	if (number % 2 == 0){
		bonus_points += 1;
	}
	
	float total_points = number + bonus_points;

	printf("%.2f\n", bonus_points);
	printf("%.2f\n", total_points);
	
}