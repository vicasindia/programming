//Loop Control: continue

// Program to read 15 integers from user and print sum of only positive integers.

#include <stdio.h>

int main()
{
	int num, sum = 0, i;

	for(i = 0; i < 15; i++)
	{
		printf("\nEnter integer: ");
		scanf("%d", &num);

		if(num < 0)
			continue;

		sum += num;
	}

	printf("\nSum of positive integers: %d", sum);
	
	return 0;
}

