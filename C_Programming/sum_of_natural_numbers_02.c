#include <stdio.h>

int main() {
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	long total_sum = (num*(num+1))/2;       //sum from 1 to n (1+2+.....+(n-1)+n)
	printf("Sum of first %d natural numbers: %ld", num, total_sum);
	return 0;
}
