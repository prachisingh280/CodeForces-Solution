#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,x;
        cin>>n>>x;
        long long arr[n];
        long long sum = 0;
        long long indisum = 0;
        
        for(long long i=0; i<n; i++)
        {
            cin>>arr[i];
            sum = sum + arr[i];
            indisum = indisum + ceil((double)arr[i]/x);
        }
 
        long long minn = ceil((double)sum/x);
        long long maxx = indisum;
        
        cout<<minn<<" "<<maxx<<"
";
        
    }
}