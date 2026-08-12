#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,k,q;
        cin>>n>>k>>q;
        long long arr[n];
        
        for(long long i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        
        long long cnt = 0;
        long long sum = 0;
        
        for(long long i=0; i<n; i++)
        {
            if(arr[i]<=q)
            {
                cnt++;
            }
            else
            {
                if(cnt>=k)
                {
                    long long a = (cnt-k+1);
                    sum = sum + (a)*(a+1)/2;
                }
                cnt = 0;
            }
        }
        
        if(cnt>0 && cnt>=k)
        {
            long long a = (cnt-k+1);
            sum = sum + a*(a+1)/2;
        }
        cout<<sum<<"
";
    }
    
}