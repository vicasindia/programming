/********************************************************
 A year is leap year (366 days) if:
    i. Year is multiple of 400.
                OR
    ii. Year is multiple of 4 and not multiple of 100.
********************************************************/

#include <stdio.h>

int main(void) {
	
	int year;
	printf("Enter the year(yyyy): ");
	scanf("%d", &year);
	
	if(!(year % 400) || (!(year % 4) && (year % 100)))
	    printf("\nWow! %d is a Leap Year.", year);
	else
	    printf("\nOops! %d is not a Leap Year.", year);
	    
	return 0;
}

