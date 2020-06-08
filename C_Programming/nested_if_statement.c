//Control flow: nested if statement

#include <stdio.h>

int main() {

	int num = 50;	//Initialization

	if(num < 100) {	//Checking condition

		if(num > 20) {

			printf("%d is between 20 and 100.", num);	//Printing if both if conditions are true
		}
		else {

			printf("%d is less than 20.", num);	//Printing if outer if condition is true but inner if condition is false
		}
	}
	
	else {

		printf("%d is greater than 100.", num);	//Printing if and else-if condition is false
	}

	return 0;
}

