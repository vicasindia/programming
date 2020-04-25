//Given three numbers, find the second largest number.

#include <stdio.h>

int main() {

	long a, b, c, second_largest;
	printf("Enter three numbers: ");
	scanf("%ld %ld %ld", &a, &b, &c);

	if(a>=b && a>=c)
		if(b>=c)
			second_largest = b;
		 else
		 	second_largest = c;

	else if(b>=a && b>=c)
		if(a>=c)
			second_largest = a;
		else
			second_largest = c;

	else
		if(a>=b)
			second_largest = a;
		else
			second_largest = b;

	printf("\nSecond largest number: %ld", second_largest);

	return 0;
}
