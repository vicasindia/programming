//Loop Control: break

// Program to read integers until user enters a negative number or number of integers read reaches to 15.

#include <stdio.h>

int main()
{
	int num, i;

	for(i = 0; i < 15; i++)
	{
		printf("\nEnter integer: ");
		scanf("%d", &num);

		if(num < 0)
			break;
	}
	
	return 0;
}

