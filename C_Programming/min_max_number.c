//Program to find smallest and largest element of an array

#include <stdio.h>

int main() {

	int size, i, min, max;
	printf("Enter the size of array: ");
	scanf("%d", &size);
	int arr[size];
	printf("Enter the array:\n");

	for(i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
		
		if(!i) {
			min = arr[0];
			max = arr[0];
		}

		if(arr[i] < min)
			min = arr[i];

		if(arr[i] > max)
			max = arr[i];
	}

	printf("Smallest number = %d\nLargest number = %d", min, max);

	return 0;
}
