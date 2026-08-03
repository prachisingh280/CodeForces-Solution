#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        long long arr[n*k];
        
        for(long long i=0; i<n*k; i++)
        {
            cin>>arr[i];
        }
        
        long long median = ceil((double)n/2);
        
        long long sum = 0;
        long long cnt = 1;
        long long i = ((n*k)-(n-median))-1;
        while(cnt<=k)
        {
            sum = sum + arr[i];
            cnt++;
            i = i - (n-median+1);
        }
        
        cout<<sum<<"
";
    }
}