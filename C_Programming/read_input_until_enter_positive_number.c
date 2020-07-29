// Program to read input until user enter a positive number
// e.g. -5 -16 0 61

#include <stdio.h>

int main()
{
	int num;
	do
	{
		printf("Enter a number:\n");
		scanf("%d", &num);
	}
	while(num <= 0);

	printf("Positive number is %d.", num);

	return 0;
}

