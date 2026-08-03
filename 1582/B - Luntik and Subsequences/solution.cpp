#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long arr[n];
        long long o = 0;
        long long z = 0;
        
        for(long long i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i]==1) 
            {
                o++;
            }
            else if(arr[i]==0)
            {
                z++;
            }
        }
        
        long long ans = pow(2,z)*o;
        cout<<ans<<"
";
        
    }
}