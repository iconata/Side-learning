#include <stdio.h>

void main(){
	int pens;
	int markers;
	int cleaning_solution;
	int discount;

	scanf("%d", &pens);
	scanf("%d", &markers);
	scanf("%d", &cleaning_solution);
	scanf("%d", &discount);
	
	float sum = ((pens * 5.80) + (markers * 7.20) + (cleaning_solution * 1.20));
	float convert = (100 - discount);
	float new_discount = convert / 100;
	float result = sum * new_discount;
	printf("%.2f", result);
}