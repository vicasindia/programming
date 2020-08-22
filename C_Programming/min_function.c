//Program to find the minimum of given two numbers

#include <stdio.h>
#define int long long

//min() Function

int min(int first, int second)
{
	return (first < second) ? first : second;
}

int main()
{
	int num1, num2;
	printf("Enter two numbers: ");
	scanf("%lld %lld", &num1, &num2);
	printf("\nMinimum is %lld", min(num1, num2));

	return 0;
}

