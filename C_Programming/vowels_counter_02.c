//Counts number of vowels of a given string

#include <stdio.h>
#include <string.h>

int main() {

    char str[250];
    int len, count = 0, i;
    printf("Enter the string: ");
    
    scanf("%s%n", str, &len);
    //printf("%d", len);
    
    len--;
        
    for(i = 0; i < len; i++)
        if(strchr("aeiouAEIOU",str[i]))
             count++;
                
        printf("Vowels Count: %d\n",count);
        
    return 0;
}

