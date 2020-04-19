/*********************************************************************************************
The ISBN(International Standard Book Number) is based upon a 10-digit code and valid if:
1xdigit1 + 2xdigit2 + 3xdigit3 + ......... + 9xdigit9 + 10xdigit10 is divisible by 11.
(e.g. 1401601499)

Input:
 Input the ISBN-10 code as a 10-digit integer.

Output:
 If the ISBN is not a 10-digit integer, output the message “Illegal ISBN” and terminate the program.
 If the number is 10-digit, extract the digits of the number and compute the sum as explained in the explanation.
	If the sum is divisible by 11, output the message, “Legal ISBN”.
	If the sum is not divisible by 11, output the message, “Illegal ISBN”.

															- HackerEarth
*********************************************************************************************/
#include <stdio.h>

int main() {
	long int num, n;
	int count=0, sum=0;
	printf("Enter the ISBN-10 code: ");
	scanf("%ld", &num);
	// Counting the number of digits
	n = num;
	while(n) {
		count++;
		n /= 10;
	}

	if(count != 10)
		printf("Result: Illegal ISBN (Not 10 digits)");	
	else {
		//Multiplying 10-1 in each digit of reverse of given number respectively & finding the sum.
		for(int i=10; i>0; i--) {
		sum += i*(num%10);
		num /= 10;
		}

		if(sum%11 == 0)
			printf("Result: Legal ISBN");
		else
			printf("Result: Illegal ISBN");
	}	
	return 0;
}