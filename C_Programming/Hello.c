/******************************************
	First progam at Github.
*******************************************/

#include <stdio.h>

int main(){
	int year;           //Variable declaration
	char name[25];
	printf("You are programming since (year): ");     //printing output to STDOUT
	scanf("%d",&year);								//reading input from STDIN
	printf("Your good name: ");
	scanf("%s",name);
	printf("---------------------------------------------\n");
	printf("Hello %s,\n Welcome to the \"programming\" repository.\n",name);
	year = 2020 - year;
	printf(" You have %d year experience in programming.\n Your contribution will be very useful...\n Happy Coding!",year);
	return 0;
}

/******************************************
		  author: Vikas Yadav
		  date: 3rd April,2020
*******************************************/