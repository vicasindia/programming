/************************************************************
For each integer n in the interval  [a,b](given as input):
    If 0<=n<=9, print the English lowercase representation.
    Else if n>9 and  even number, print "even".
    Else if n>9 and  odd number, print "odd".
                                        -HackerRank
*************************************************************/

//Input-Output, 2D Array, Pointer, If-Else, Loop

#include <stdio.h>

int main() 
{
    
    int a, b;
    printf("Enter lower and upper range: ");
    scanf("%d %d", &a, &b);
    
    char word[][10] = {"zero","one","two","three","four","five","six","seven","eight","nine"}; //char *word[10]
    printf("----------------------------------\n");
    
    for(int i=a; i<=b; i++) {
        if(i > 9) {
            if(!(i % 2))
                printf("even\n");
            else
                printf("odd\n");
        }           
        else
            printf("%s\n", word[i]);
    }
    
    return 0;
}
