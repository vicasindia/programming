// Problem link: https://www.codechef.com/TTOE2020/problems/DCODIP

#include <stdio.h>

int main()
{
    char arr[35], temp[32];
    int i, j = 0, key;
    //Input the string
    scanf("%s", arr);
    
    //Removing . from string
    for(i = 0; i < 35; i++)
        if(arr[i] != '.')
            temp[j++] = arr[i];
        
    //Sorting the string using Insertion sort
    for (i = 1; i <32; i++) {
        key = temp[i]; 
        j = i - 1; 
    
        while (j >= 0 && temp[j] > key) { 
            temp[j + 1] = temp[j]; 
            j -= 1; 
        } 
        temp[j + 1] = key; 
    }
        
    //Taking the first element of each octet
    int num[4] = {temp[0], temp[8], temp[17], temp[26]};

    //Coverting IP in Class B and printing binary
    for(int k = 0; k < 4; k++) {
        for (i = 0; i < 8; i++)
            printf ("%d", (num[k]+63 << i & 1 << 7 ) ? 1 : 0);
            if(k != 3)
                printf(".");
    }
   
    return 0;
}
