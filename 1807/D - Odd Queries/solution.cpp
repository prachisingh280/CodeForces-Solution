#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,q;
        cin>>n>>q;
        long long arr[n];
        long long sum = 0;
        
        for(long long i=0; i<n; i++)
        {
            cin>>arr[i];
            sum = sum + arr[i];
        }
        
        vector<int>prefix_sum(n+1,0);
        
        for(int i=1; i<=n; i++)
        {
            prefix_sum[i] = prefix_sum[i-1] + arr[i-1];
        }
 
        for(long long i=1; i<=q; i++)
        {
            long long l,r,k;
            cin>>l>>r>>k;
            long long little_sum = 0;
            
            little_sum = prefix_sum[r] - prefix_sum[l-1];
            
            long long final_sum = sum - little_sum + ((r-l+1)*k);
            
            if(final_sum%2==0)
            {
                cout<<"NO"<<"
";
            }
            else
            {
                cout<<"YES"<<"
";
            }
        }
    }
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 