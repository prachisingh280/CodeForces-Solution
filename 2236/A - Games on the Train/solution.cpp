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
        
        for(long long i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        
        long long maxx = *max_element(arr,arr+n);
        long long minn = *min_element(arr,arr+n);
        
        long long k = maxx - minn + 1;
        cout<<k<<"
";
    }
}