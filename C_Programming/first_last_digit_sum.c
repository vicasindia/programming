// Finding the sum of first and last digit of a number;

#include <stdio.h>

int main() {
	unsigned long long int num;
	printf("Enter a number: ");
	scanf("%llu", &num);
	int last = num % 10;
	while(num > 10)
		num /= 10;
	printf("Sum of first and last digit: %d", num + last);
	return 0;
}
