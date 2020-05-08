//Swapping two numbers without using temporary variable

#include <stdio.h>

int main(void) {
    
	long num1, num2, temp;
	
	printf("Enter two numbers: ");
	scanf("%ld %ld", &num1, &num2);
	
	printf("\nBefore Swapping: Num1 = %ld, Num2 = %ld", num1, num2);

// Using Addition and Subtraction	
// 	num1 = num1 + num2;
// 	num2 = num1 - num2;
// 	num1 = num1 - num2;
	
// Using Multiplication and Division
// 	num1 = num1 * num2;
// 	num2 = num1 / num2;
// 	num1 = num1 / num2;

// Using XOR Operator
    num1 = num1 ^ num2;
	num2 = num1 ^ num2;
	num1 = num1 ^ num2;
	
	printf("\nAfter Swapping:  Num1 = %ld, Num2 = %ld", num1, num2);
	
	return 0;
}
