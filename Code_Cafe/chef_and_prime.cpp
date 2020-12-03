  //Problem link: https://www.codechef.com/CAFE2020/problems/CFPRIME

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int test_cases;
    cin >> test_cases;

    while(test_cases--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];

        int result = 0;
        
        // Digit counting
        for(int i = 0; i < n; i++)
        {
            if(a[i] == 0)
                result += 1;
            else
                result += (floor(log10(a[i])) + 1);     //O(1)
        }

        bool flag = false;
        int e = sqrt(result);

        //Prime checking
        for(int i = 2 ; i <= e; i++)
        {
            if(result % i == 0)
            {
                flag = true;
                break;
            }
        }

        if(flag)
        {
            cout<<"No\n";
        }
        else
        {
            cout<<"Yes\n";
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}

