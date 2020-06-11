//Program to find largest number among three numbers (using nested loop).

#include <stdio.h>

int main() {

	long n1, n2, n3;

	printf("Enter three numbers: ");
	scanf("%ld %ld %ld", &n1, &n2, &n3);

	if(n1 > n2) {

		if(n1 > n3)
			printf("\n%ld is the largest number.", n1);

		else
			printf("\n%ld is the largest number.", n3);
	}

	else {

		if(n2 > n3)
			printf("\n%ld is the largest number.", n2);

		else
			printf("\n%ld is the largest number.", n3);
	} 

	return 0;
}