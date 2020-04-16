/*
Print each word of the sentence in a new line.
    -HackerRank                             */
    
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *sen = malloc(1024 * sizeof(char));
    printf("Enter the sentence: \n");
    scanf("%[^\n]", sen);
    sen = realloc(sen, strlen(sen)+1);
    printf("---------------------\n");
    printf("Tokens are following: \n");
    for(int i=0; i<strlen(sen); i++) {
        if(sen[i] == ' ')               //' ' or 32 
            printf("\n");
        else
            printf("%c", sen[i]);
    }
    free(sen);
    return 0;
}
