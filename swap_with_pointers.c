//Swapping two numbers using pointers

#include <stdio.h>

long int  swap(long int*,long int* );
int main(void) {
    
	long num1, num2;
	
	printf("Enter two numbers: ");
	scanf("%ld %ld", &num1, &num2);
	
	printf("\nBefore Swapping: Num1 = %ld, Num2 = %ld", num1, num2);
	
	swap(&num1,&num2);
	
	printf("\nAfter Swapping:  Num1 = %ld, Num2 = %ld", num1, num2);
	
	return 0;
}
long int swap(long int *a,long int *b){
    long temp;
    temp=*b;
    *b=*a;
    *a=temp;
    
}
        

