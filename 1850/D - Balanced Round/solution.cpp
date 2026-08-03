#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        
        sort(arr, arr+n);
        int maxx = 0;
        int count = 0;
        
        for(int i=0; i<n-1; i++)
        {
            int d = arr[i+1] - arr[i];
            if(d>k)
            {
                maxx = max(maxx,count);
                count = 0;
            }
            else
            {
                count++;
            }
        }
        
        maxx = max(maxx,count);
        cout<<n-maxx-1<<"
";
        
    }
}