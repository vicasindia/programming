// Find maximum number among 4 numbers.
#include <stdio.h>

long max_of_four(long a, long b, long c, long d)
{
    long max1, max2;
    max1 = a > b ? a : b;
    max2 = c > d ? c : d; 
    
    return max1 > max2 ? max1 : max2;
}

int main()
{
    long a, b, c, d;
    printf("Enter 4 numbers: ");
    scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
    long ans = max_of_four(a, b, c, d);
    printf("\nMax is %ld.", ans);
    
    return 0;
}

