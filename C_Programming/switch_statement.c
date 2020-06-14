//Control Flow: switch statement
//Weekdays

#include <stdio.h>

int main() {

	int weekday;
  
	printf("Enter the day number (1-7): ");
	scanf("%d", &weekday);
	printf("\n");

	switch(weekday) {

		case 1: printf("Monday"); break;

		case 2: printf("Tuesday"); break;
		
		case 3: printf("Wednesday"); break;
		
		case 4: printf("Thursday"); break;
		
		case 5: printf("Friday"); break;
		
		case 6: printf("Saturday"); break;
		
		case 7: printf("Sunday"); break;
		
		default: printf("Please, enter valid input.");	//the order of default doesn't matter
	}

	return 0;
}

