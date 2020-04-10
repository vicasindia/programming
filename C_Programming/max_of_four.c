// Find maximum number among 4 numbers.
#include <stdio.h>

int max_of_four(int a, int b, int c, int d) {
    int max1, max2;
    max1=a>b ? a : b;
    max2=c>d ? c : d; 
    return max1>max2 ? max1 : max2;
}
int main() {
    int a, b, c, d;
    printf("Enter 4 numbers:\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("Max is %d.", ans);   
    return 0;
}

