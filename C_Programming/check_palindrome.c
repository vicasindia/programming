//A palindrome is a word, number, phrase, or other sequence of characters which reads the same backward as forward, e.g ABA, madam.
// Program to check whether given string is Palindrome or Not
//Constraint: The string should lowercase or UPPERCASE

#include <stdio.h>
#include <string.h>

int main() {
	
	char s[100];
	int i, j, flag = 1;
	
	printf("Enter the String: ");
	scanf("%s", s);
	int len = strlen(s);
	
	for(i=0, j=len-1; i<j; i++, j--) {
		if(s[i] != s[j]) {
			flag=0;
			break;
		}	
	}
	flag ? printf("Congratulations! It\'s a Palindrome.") : printf("Oops! Not Palindrome. Try another.");
	
	return 0;
}
