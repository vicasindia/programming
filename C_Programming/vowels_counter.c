#include <stdio.h>

int isVowel(char ch) {
    char vowels[10] = "aeiouAEIOU";
    for(int i = 0; i < 10; i++) {
        if(ch == vowels[i])
		    return 1;
    }
    return 0;
}

int main(void) {
	
	int size=25, count=0;
	printf("Enter the size of string: ");
	scanf("%d", &size);
	char str[size];
	printf("Enter the string: ");
	scanf("%s", str);
	for(int i = 0; i < size; i++)
	    if(isVowel(str[i]))
	        count++;
	printf("Vowels Count: %d", count);
	return 0;
}
