#include <stdio.h>

void main(){
	int chicken_menu;
	int fish_menu;
	int vegetarian_menu;
	float delivery = 2.50;

	scanf("%d", &chicken_menu);
	scanf("%d", &fish_menu);
	scanf("%d", &vegetarian_menu);

	float total_sum = (chicken_menu * 10.35) + (fish_menu * 12.40) + (vegetarian_menu * 8.15);
	float dessert = total_sum * 0.20;
	float final_sum = total_sum + dessert + delivery;
	printf("%.2f", final_sum);
}