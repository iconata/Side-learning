#include <stdio.h>

void main(){
	float lenght;
	float width;
	float height;
	float percent;

	scanf("%f", &lenght);
	scanf("%f", &width);
	scanf("%f", &height);
	scanf("%f", &percent);

	float volume = lenght * width * height;
	float volume_in_liters = volume / 1000;
	float volume_remaining = 100 - percent;
	float convert = volume_remaining / 100;
	float liters_remaining = volume_in_liters * convert;
	printf("%f", liters_remaining);
}