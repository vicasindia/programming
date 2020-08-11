//Program to count number of digits in an integer.

#include <stdio.h>

int main()
{
	long long num;
	printf("Enter an integer: ");
	scanf("%lld", &num);

	int count = 0;
	while(num)
	{
		num /= 10;
		count++;
	}

	printf("\nDigits count: %d", count);

	return 0;
}

