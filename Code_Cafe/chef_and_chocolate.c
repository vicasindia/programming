  //Problem link: https://www.codechef.com/CAFE2020/problems/CHOLAT
  
  #include <stdio.h>

int main()
{
    int test_cases;
    scanf("%d", &test_cases);

    while(test_cases--)
    {
        int n;
        scanf("%d", &n);

        int arr[n], count = 0;
        
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        
        for(int i = 0; i < n; i++)
        {
            int j = 0; 
            for (j = 0; j < i; j++)
            {
                if (arr[i] == arr[j]) 
                break; 
            }

            if (i == j) 
                count++; 
        }

        printf("%d\n", count);  
    }
	
	return 0;
}
