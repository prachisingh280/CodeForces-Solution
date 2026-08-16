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
        for(long long i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        
        long long change = 0;
        vector<pair<long long,long long>>segments(n);
        for(long long i=0; i<n; i++)
        {
            segments[i] = {arr[i]-x,arr[i]+x};
        }
        long long l = segments[0].first;
        long long r = segments[0].second;
        
        for(long long i=1; i<n; i++)
        {
             l = max(l,segments[i].first);
             r = min(r,segments[i].second);
            if(l>r)
            {
                change++;
                l = segments[i].first;
                r = segments[i].second;
            }
        }
        
        cout<<change<<"
";
    }
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 