//Toggle String: Change Uppercase letter to lowercase letter and vice-versa of a given string.

#include <stdio.h>
 
int main()
{
    int ch;
    printf("Input String: \n");
	
    while(ch=getchar())
	{
        if(ch >= 'A' & ch <= 'Z')
            ch += 32;
        else if(ch >= 'a' & ch <= 'z')
            ch -= 32;
        putchar(ch);
    }
    return 0;
}

//If input is given from keyboard then use "ctrl+c" to terminate the program.
