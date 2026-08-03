#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t; 
    while (t--)
    {
        long long n, a, b;
        cin >> n >> a >> b; 
        
        if((n == a && n == b) || n==1)
        {
            cout<<"YES"<<"
";
            continue;
        }
        
        if(n==2 || n==3)
        {
            cout<<"NO"<<"
";
            continue;
        }
        
        if(a+b<=n-2)
        {
            cout<<"YES"<<"
";
            
        }
        
        else
        {
            cout<<"NO"<<"
";
        }
}
}
 