//Problem link: https://www.codechef.com/TTOE2020/problems/CMEET

#include <stdio.h>

//Custom function which counts number of vowels in a given string
int isVowel(char ch)
{
    char vowels[5] = "AEIOU";
	for(int i = 0; i < 5; i++)
	{
	    if(ch == vowels[i])
			return 1;
    }
    return 0;
}

//Factorial function
unsigned long long factorial(int n)
{
	if(n == 0 || n == 1)
		return 1;
	else
		return n * factorial(n-1);
}


int main(void) {
	
	int test;
	scanf("%d", &test);
	
	while(test--)
	{
	    int size, vowel_count = 0, consonant_count, i;
	    scanf("%d", &size);
	    
	    char str[size+1];
	    scanf("%s", str);
	    
	    for(i = 0; i < size; i++)
	        if(isVowel(str[i]))
	            vowel_count++;
	            
	    consonant_count = size - vowel_count;
	    
	    unsigned long long total_ways;
	    
	    if(vowel_count)
	        total_ways = factorial(vowel_count) * factorial(consonant_count + 1);
	    else
	        total_ways = factorial(consonant_count);
	   
	    
	    printf("%llu\n", total_ways);
	    
	}
	
	return 0;
}

