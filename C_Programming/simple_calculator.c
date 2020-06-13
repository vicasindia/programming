//Simple Calculator

#include <stdio.h>

int main() {

	char operator;
	double num1, num2;

	printf("Enter an operator (+, -, *, /): ");
	scanf("%c", &operator);

	printf("\nEnter two operands: ");
	scanf("%lf %lf", &num1, &num2);
	printf("\n");

	switch(operator) {

		case '+': 
				printf("Addition of %.2lf and %.2lf = %.2lf", num1, num2, num1 + num2);
				break;

		case '-': 
				printf("Subtraction of %.2lf and %.2lf = %.2lf", num1, num2, num1 - num2);
				break;

		case '*': 
				printf("Multiplication of %.2lf and %.2lf = %.2lf", num1, num2, num1 * num2);
				break;

		case '/': 
				printf("Division of %.2lf and %.2lf = %.2lf", num1, num2, num1 / num2);
				break;

		default: 
				printf("Please, enter valid operator.");
	}

	return 0;
}

