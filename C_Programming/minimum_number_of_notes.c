/*
Consider a currency system in which there are notes of nine denominations, namely, ₹1, ₹2, ₹5, ₹10, ₹20, ₹50, ₹100, ₹500, ₹2000.
Program to compute minimum number of notes that will combine to give ₹ N.
				-CodeChef
*/

#include <stdio.h>

int main(void) {
	unsigned long long int amount;
	int i=0, count=0;
	int currency[] = {2000, 500, 100, 50, 20, 10, 5, 2, 1};
	printf("Enter the amount: ₹");
	scanf("%llu", &amount);
	    
	while(amount && i<9) {
		int notes=currency[i];
		if(amount >= notes) {
			amount -= notes;
			count++;
		}
		else
			i++;
	}
	printf("Minimum numbers of Notes: %d\n", count);
	return 0;
}