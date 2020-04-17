/*
    Given a string, consisting of alphabets and digits, find the frequency of each digit in the given string.
                - HackerRank
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char *str = malloc(1024 * sizeof(char));
    printf("Enter the string(alpha-numeric): \n");
    scanf("%s", str);
    str = realloc(str, strlen(str)+1);
    int freq[10], i;

    // Initialize frequency of each digit with 0
    for(i=0; i<10; i++)
        freq[i] = 0;

    // Checking the frequency of each digit
    for(i=0; i<strlen(str); i++)
        if(str[i] >= '0' && str[i] <= '9')
            freq[str[i] - '0']++;

    // Printing the frequency of each digit
    printf("Digits frequency is following (order: 0-9): \n");
    for(i=0; i<10; i++)
        printf("%d ", freq[i]);

    free(str);

    return 0;
}