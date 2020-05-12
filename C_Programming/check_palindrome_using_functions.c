//A palindrome is a word, number, phrase, or other sequence of characters which reads the same backward as forward, e.g RADAR, madam.
// Program to check whether given string is Palindrome or Not (using functions)
//The string should lowercase or UPPERCASE

#include <stdio.h>
#include <string.h>

//strrev() is not a standard function and not available in standard library (new) in C. 
void strrev(char *str) {
    
	int i, j, len = strlen(str) - 1;
	char ch;
	
	for(i = 0, j = len; i < j; i++, j--) {
		ch = str[i];
		str[i] = str[j];
		str[j] = ch;
	}
}

int main() {

	char s[100], rev[100];
	
	printf("Enter the String: ");
	gets(s);
	//scanf("%s", s);
	
	strcpy(rev, s); //Copys content of s to rev
	
	strrev(rev); //Custom function
	
	//printf("\n%s\n %s\n", s, rev);
	
	!strcmp(s, rev) ? printf("Congratulations! It\'s a Palindrome.") : printf("Oops! Not Palindrome. Try another.");
	
	return 0;
}

