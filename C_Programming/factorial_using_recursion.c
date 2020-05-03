// n! = n*(n-1)*(n-2)*.......3*2*1
// Constraint: 0 <= n <= 20

#include <stdio.h>

//Factorial function
unsigned long long factorial(int n) {
	if(n == 0 || n == 1)
		return 1;
	else
		return n * factorial(n-1);
}

int main() {

	int num;
  	printf("Enter the number to find factorial: ");
	scanf("%d", &num);

	printf("%d! = %llu", num, factorial(num));  //Recursion

	return 0;
}
