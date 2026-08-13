#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a = n;
        int ans = 1;
        if (n % 2 == 0)
        {
            cout << n / 2 << " " << n / 2 << "
";
            continue;
        }
        else
        {
            int ans = 1;
            for(int i = 2; i * i <= n; i++)
            {
                if(n%i==0)
                {
                    ans = n/i;
                    break;
                }
            }
            
            cout<<ans<<" "<<n-ans;
            cout<<"
";
 
        }
 
 
    }
 
}