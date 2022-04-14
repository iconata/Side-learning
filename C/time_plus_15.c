#include <stdio.h>

void main(){
	int hour;
	int minutes;

	scanf("%d", &hour);
	scanf("%d", &minutes);

	if ((minutes + 15) >= 60){
		hour += 1;
		minutes += 15;
		minutes = minutes % 60;
		if (hour > 23){
			hour = 0;
		}
	}
	else{
		minutes += 15;
	}
	if (minutes < 10){
		printf("%d:0%d", hour, minutes);
	}
	else{
		printf("%d:%d", hour, minutes);
	}
}