/******************************************************************************************
Consider lowercase Alphabets from a to z have a certain weight as a=1, b=2, ..... z=26. 

Input Format:
String S in lowercase.

Output Format:
Print the summation of weight of each character in the String.

Constraints:
1≤|S|≤100

Explanation:
Consider the String "aba"
Here, the summation is equal to : 1+2+1=4
			    -HackerEarth
******************************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
	char str[100];
	int sum = 0;
	printf("Enter the String in lowercase: ");
	scanf("%s", str);
	for(int i = 0; i < strlen(str); i++)
		sum += (str[i] - 96); 		// ASCII value of 'a' = 97		
	printf("The summation of weight of each character of String: %d", sum);
	return 0;
}
