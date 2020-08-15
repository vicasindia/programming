//Program to check whether given number is Palindrome or not.
//A number is palindrome if it is equal to its reverse number, e.g 121, 5555.


#include <stdio.h>

int main()
{	
	long  num;
	
	printf("Enter an integer: ");
	scanf("%ld", &num);

	long original_num = num, reverse_num = 0, remainder;
	
	while(num)
	{
		remainder = num % 10;
		reverse_num = reverse_num * 10 + remainder;
		num /= 10;
	}

	original_num == reverse_num ? printf("\nPalindrome") : printf("\nNot a Palindrome");

	return 0;
}

