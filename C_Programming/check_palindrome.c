// Program to check whether given string is Palindrome or Not
#include <stdio.h>
#include <string.h>

int main(){
	char s[100];
	int i, j, flag = 1;
	printf("Enter the String: ");
	scanf("%s", s);
	for(i=0, j=strlen(s)-1; i<j; i++, j--){
		if(s[i] != s[j]){
			flag=0;
			break;
		}	
	}
	flag ? printf("Congratulations! It\'s a Palindrome.") : printf("Oops! Not Palindrome. Try another.");
	return 0;
}
