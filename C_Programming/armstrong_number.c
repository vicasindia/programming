/******************************************************************************************************

Given a number x, determine whether the given number is Armstrong number or not. 
A positive integer of n digits is called an Armstrong number of order n (order is number of digits) if
abcd... = pow(a,n) + pow(b,n) + pow(c,n) + pow(d,n) + ....
						- GeeksforGeeks

*******************************************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
	long long num, original_num, remainder, result = 0, digits = 0;
	printf("Enter an integer: ");
	scanf("%lld", &num);

	original_num = num;

	//digits count
	while(original_num)
	{
		original_num /= 10;
		digits++;
	}

	original_num = num;

	while(original_num)
	{
		remainder = original_num % 10;
		result += pow(remainder, digits);
		original_num /= 10;
	}

	result == num ? printf("\nWow! Armstrong Number.") : printf("\nNot Armstrong Number.");

	return 0;
}

