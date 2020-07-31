//Problem link: https://www.codechef.com/TTOE2020/problems/BRTNUM

#include <stdio.h>

int main() 
{
	int test;
	scanf("%d", &test);

	while(test--)
	{
		long long num;
		scanf("%lld", &num);

		int ramanujan_num = 1729, flag = 0;

		while(num > 1000)
		{
			int remainder = num % 10000;
			if(remainder == ramanujan_num)
			{
				flag = 1;
				break;
			}
			num /= 10;
		}

		printf(flag ? "Yes\n" : "No\n");
	}

	return 0;
}

