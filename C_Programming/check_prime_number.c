/*
A prime number is a natural number greater than 1 that has no positive divisors other than 1 and itself. 
The first few prime numbers are {2, 3, 5, 7, 11, ….}
        - GeeksforGeeks
*/

#include <stdio.h>
#include <math.h>

int main(void) {
	int num, i, flag=1;
	printf("Enter a number: ");
	scanf("%d", &num);
	for(i = 2; i <= sqrt(num); i++) {
	    if(num % i == 0) {
	        flag = 0;
	        break;
	    }
	}
	
	if(flag)
	    printf("%d is a Prime Number.", num);
	else
		printf("%d is not a Prime Number.", num);	    
	    
	return 0;
}
