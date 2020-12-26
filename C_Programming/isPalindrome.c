//A palindrome is a word, number, phrase, or other sequence of characters which reads the same backward as forward, e.g ABA, madam.
//Constraint: The string should lowercase or UPPERCASE

#include <stdio.h>
#include <string.h>

//Function to check whether given string is Palindrome or Not.
void isPalindrome(char *s)
{
	int start = 0, end = strlen(s)-1;

	while(start < end)
	{
		if(s[start++] != s[end--])
		{
			printf("\nOops! \"%s\" is not a Palindrome. Try another.", s); //Compare until forward and backward characters are same
			
            return; 
		}
	}
	printf("\nCongratulations! \"%s\" is a Palindrome.", s);
}

int main()
{	
	char str[250];
	
	printf("Enter the String: ");
	scanf("%s", str);
	
	isPalindrome(str);	//Function calling

	return 0;
}

