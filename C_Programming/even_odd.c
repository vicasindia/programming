//Program to check whether the given number is Even or Odd.
//Any integer number that can be exactly divided by 2 is called as an even number.

#include <stdio.h>

int main() {

	long num;
	printf("Enter a number: ");
	scanf("%ld", &num);

	if(num % 2 == 0)
		printf("\n%ld is an Even Number.", num);
	else
		printf("\n%ld is an Odd Number.", num);

	return 0;
}
