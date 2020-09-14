//Swapping two numbers using pointer

#include <stdio.h>

void swap(long *first, long *second);	//Function prototype

int main(void)
{  
	long num1, num2;
	
	printf("Enter two numbers: ");
	scanf("%ld %ld", &num1, &num2);
	
	printf("\nBefore Swapping: Num1 = %ld, Num2 = %ld", num1, num2);
	
	swap(&num1, &num2);    //Function calling
	
	printf("\nAfter Swapping:  Num1 = %ld, Num2 = %ld", num1, num2);
	
	return 0;
}

//Swap Function definition
void swap(long *first, long *second)
{	
    long temp = *second;
    *second = *first;
    *first = temp;   
}   

