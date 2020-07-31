//Problem link: https://www.codechef.com/TTOE2020/problems/PPRIME

#include <stdio.h>
#include <math.h>

//Sum of all prime factors
long primeFactorsSum(int num) {
    
    int i;
    long sum = 0;
    
    while (num % 2 == 0) { 
        sum += 2;
        num /= 2; 
    } 
  
    for (i = 3; i <= sqrt(num); i += 2) { 
        while (num % i == 0) { 
            sum += i;
            num /= i; 
        } 
    } 
  
    if (num > 2) 
        sum += num;
        
    return sum;
}


// Insertion sort
void insertionSort(long arr[], int n) {
    
    int i, j, key;
    
    for (i = 1; i < n; i++) { 
        key = arr[i]; 
        j = i - 1; 

        while (j >= 0 && arr[j] > key) { 
            arr[j + 1] = arr[j]; 
            j -= 1; 
        } 
        arr[j + 1] = key; 
    } 
} 


int main(void) {
    
	int test;
	scanf("%d", &test);
	
	while(test--) {
	    int size, i;
	    scanf("%d", &size);
	    
	    int arr[size];
	    long prime_sum[size];
	    
	    for(i = 0; i < size; i++) {
	        scanf("%d", &arr[i]);
	        prime_sum[i] = primeFactorsSum(arr[i]);   //Store elements as sum of all prime factors
	    }
	    
	    insertionSort(prime_sum, size);  //Array sorting
	    
	    //Array printing in reverse order
	    for(i = size-1; i >= 0; i--)
	        printf("%d ", prime_sum[i]);
	    
	    printf("\n");
	}
	
	return 0;
}

