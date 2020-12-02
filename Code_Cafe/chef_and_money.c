//Problem link: https://www.codechef.com/CAFE2020/problems/CHMNY

// G  for a guard, M for money, T for the thief and ∗ for blank space.

#include <stdio.h>

int main()
{
	int test_cases;
	scanf("%d", &test_cases);

	while(test_cases--)
	{
		char str[26], new_str[26];
		scanf("%s", str);

		int j = 0, flag = 0;

		for(int i = 0; str[i] != '\0'; i++)
		{
			if(str[i] != '*')
				new_str[j++] = str[i];
		}

		new_str[j] = '\0';

		for(int i = 1; new_str[i] != '\0'; i++)
		{
			if((new_str[i-1] == 'M' && new_str[i] == 'T') || (new_str[i] == 'M' && new_str[i-1] == 'T'))
			{
				flag = 1;
				break;
			}
		}

		printf(flag ? "NO\n" : "YES\n");

	}

	return 0;
}

