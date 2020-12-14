/**********************************************************************************************************
A prime number is a natural number (greater than 1) that has no positive divisors other than 1 and itself. 
The first few prime numbers are {2, 3, 5, 7, 11, ….}
        - GeeksforGeeks
************************************************************************************************************/

#include <stdio.h>
#include <math.h>

int main(void)
{
	long num; 
	int flag = 1;
	
	printf("Enter a number: ");
	scanf("%ld", &num);

	if(num == 2)
	{
		//2 is Prime number
	}			

	else if(num < 2 || !(num % 2))		//Even numbers (except 2) can't be Prime numbers
		flag = 0;

	else
	{
		for(int i = 3; i <= sqrt(num); i += 2)
		{		    
		    if(!(num % i))
			{
		        flag = 0;
		        break;
		    }
		}
	}
	
	if(flag)
	    printf("%ld is a Prime Number.", num);
	else
        printf("%ld is not a Prime Number.", num);	    
	    
	return 0;
}
