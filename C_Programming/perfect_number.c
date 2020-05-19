/*****************************************************************************************************************
A perfect number is a positive integer that is equal to the sum of its positive divisors, 
excluding the number itself. 
For instance, 6 has divisors 1, 2 and 3 (excluding itself), and 1 + 2 + 3 = 6, so 6 is a perfect number.

The sum of divisors of a number, excluding the number itself, is called its aliquot sum, 
so a perfect number is one that is equal to its aliquot sum. 
Equivalently, a perfect number is a number that is half the sum of all of its positive divisors including itself; 
in symbols, σ1(n) = 2n where σ1 is the sum-of-divisors function. 
For instance, 28 is perfect as 1 + 2 + 4 + 7 + 14 + 28 = 56 = 2 × 28.
                                                                        -Wikipedia
******************************************************************************************************************/
#include <stdio.h>

int main(void) {
	
	int num, sum = 0, i = 1;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	while(num > i) {
	    if(!(num % i))
	        sum += i;
	    i++;
	}
	
	if(sum == num)
	    printf("\nWow! %d is a perfect number.", num);
	else
	    printf("\nOops! %d is not a perfect number.", num);
	    
	return 0;
}

