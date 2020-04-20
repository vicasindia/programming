//Input: Decimal Number (Integer -32768 to 65535)
//Output: Binary Number (Signed 2's Complement)

#include <stdio.h>

int main( )
{
    int num;
    printf("Enter the Decimal Number: ");
    scanf ("%d", &num);
    printf("Binary Number: ");
    
    for (int i = 0; i < 16; i++)
        printf ("%d", (num << i & 1 << 15 ) ? 1 : 0);

    return 0;
}
