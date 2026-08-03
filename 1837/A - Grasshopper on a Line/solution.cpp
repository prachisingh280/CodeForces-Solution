#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long x,k;
        cin>>x>>k;
        long long a=0, b=0;
        
        if(x%k!=0)
        {
            cout<<"1"<<"
";
            cout<<x<<"
";
            continue;
        }
        
        else
        {
            for(long long i=1; i<=x/2; i++)
            {
                a = i;
                b = x - i;
                if(a%k!=0 && b%k!=0)
                {
                    cout<<"2"<<"
";
                    cout<<a<<" "<<b<<"
";
                    break;
                }
                else
                {
                    continue;
                }
            }
        }
        
    }
 
}