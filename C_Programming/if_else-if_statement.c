//Control flow: if else-if statement

#include <stdio.h>

int main() {

	int num = 50;	//Initialization

	if(num < 20) {	//Checking condition

		printf("%d is less than 20.", num);	//Printing if condition is true
	}
	else if(num < 100) {

		printf("%d is between 20 and 100.", num);	//Printing if if condition is false and else-if condition is true
	}
	else {

		printf("%d is greater than 100.", num);	//Printing if and else-if condition is false
	}

	return 0;
}

