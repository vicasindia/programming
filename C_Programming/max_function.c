//Program to find the maximum of given two numbers

#include <stdio.h>
#define int long long

//max() Function

int max(int first, int second)
{
	return (first > second) ? first : second;
}

int main()
{
	int num1, num2;
	printf("Enter two numbers: ");
	scanf("%lld %lld", &num1, &num2);
	printf("\nMaximum is %lld", max(num1, num2));

	return 0;
}
