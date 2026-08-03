#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long a,b,n;
        cin>>a>>b>>n;
        long long arr[n];
        
        for(long long i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        
        long long timer = 1;
        
        long long i = 0;
        while(i!=n)
        {
            if(b>1)
            {
                timer = timer + (b-1);
                b = 1;
            }
            else
            {
                timer = timer + min(1+arr[i],a) - 1;
                i++;
            }
        }
        
        cout<<timer<<"
";
        
    }
}