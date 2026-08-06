#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long c2 = 0;
        long long c3 = 0;
        
        while(n%2==0)
        {
            n = n/2;
            c2++;
        }
        while(n%3==0)
        {
            n = n/3;
            c3++;
        }
        
        if(n>1 || c2>c3)
        {
            cout<<"-1"<<"
";
        }
        else
        {
            long long cnt = c2+2*(c3-c2);
            cout<<cnt<<"
";
        }
        
        
    }
}