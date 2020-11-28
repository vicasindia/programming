//Problem link: https://www.codechef.com/CAFE2020/problems/CHFNA

#include <stdio.h>

int main()
{
    int test_cases;
    scanf("%d", &test_cases);

    while(test_cases--)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        printf("%ld\n", x ^ y);
    }

    return 0;
}
