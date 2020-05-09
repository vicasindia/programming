/***************************************************************************************************************
 In mathematics, the Fibonacci numbers, commonly denoted Fn, form a sequence, called the Fibonacci sequence, 
 such that each number is the sum of the two preceding ones, starting from 0 and 1. That is
 F(0) = 0, F(1) = 1
 and
 F(n) = F(n-1) + F(n-2)
 for n > 1.
 The beginning of the sequence is thus:
    0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144....
    
  In some older books, the value F(0) = 0 is omitted, so that the sequence starts with F(1) = F(2) = 1 and 
  the recurrence F(n) = F(n-1) + F(n-2)  is valid for n > 2
                                    - Wikipedia
                                    
 Constraints: 3 <= terms <= 91
***************************************************************************************************************/

#include <stdio.h>

int main(void) {
	
	int terms;
	printf("Enter the number of terms: ");
	scanf("%d", &terms);
	
	long first = 0, second = 1, next;
	
	printf("\n\nFibonacci Numbers:\n  %ld  %ld", first, second);
	terms -= 2;
	
	while(terms--) {
	    
	    next = first + second;
	    first = second;
	    second = next;
	    printf("  %ld", next);
	    
	   // if(!(terms%10))
	   //     printf("\n");
	}
	
	return 0;
}
