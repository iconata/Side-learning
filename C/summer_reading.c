#include <stdio.h>

int main(){
	int current_pages;
	int pages_per_hour;
	int days_to_read;

	scanf("%d", &current_pages);
	scanf("%d", &pages_per_hour);
	scanf("%d", &days_to_read);

	int total_hours = current_pages / pages_per_hour;
	int hours_to_read = total_hours / days_to_read;
	printf("%d", hours_to_read);

}