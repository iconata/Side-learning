#include <stdio.h>

void main(){
	int first_seconds;
	int second_seconds;
	int third_seconds;

	scanf("%d", &first_seconds);
	scanf("%d", &second_seconds);
	scanf("%d", &third_seconds);

	int total_time = first_seconds + second_seconds + third_seconds;
	int minutes = total_time / 60;
	int seconds = total_time % 60;
	
	if (seconds <= 9){
		printf("%d:0%d\n", minutes, seconds);
	} 
	else {
	printf("%d:%d\n", minutes, seconds);
	}
}