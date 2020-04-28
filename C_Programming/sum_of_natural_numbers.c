#include <stdio.h>

//Function will return sum from n to 1 (n+(n-1)+......+2+1)
long sum(int num) {
    long sum = 0;
    for(int i = num; i > 0; i--)
        sum += i;
    return sum;
}

int main() {
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	long total_sum = sum(num);
	printf("Sum of first %d natural numbers: %ld", num, total_sum);
	return 0;
}
