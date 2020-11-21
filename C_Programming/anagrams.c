/***************************************************************************************
Anagrams:

Given two strings, a and b , that may or may not be of the same length, 
determine the minimum number of character deletions required to make a and b anagrams. 
Any characters can be deleted from either of the strings.

Input :

Test cases, T
Two strings a and b, for each test case

Output:

Desired O/P

Constraints :

1 < String lengths <10000

Note :

Anagram of a word is formed by rearranging the letters of the word.

e.g. -> For the word RAM - MAR,ARM,AMR,RMA etc. are few anagrams.

								-HackerEarth
**********************************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
	int test;
	scanf("%d", &test);

	while(test--)
	{		
		char A[10000], B[10000];
		scanf("%s %s", A, B);

		int i, j, count = 0;
		int lenA = strlen(A), lenB = strlen(B);

		for(i = 0; i < lenA; i++) {
			for(j = 0; j < lenB; j++) {
			
			//checking common character in both string A and B.
				if(A[i] == B[j]) {	
					count += 2;
					B[j] = ' ';		//remove common characters
					break;
				}
			}
		}

		printf("%d\n", lenA + lenB - count);	
	}

	return 0;
}

