//Control Flow: do while loop

#include <stdio.h>

int main()
{
	int a = 20;	//Initialization

	do
	{
		printf("a value: %d\n", a);
		a++;	//Update expression
	}
	while(a < 20);	//Test condition

	return 0;
}

