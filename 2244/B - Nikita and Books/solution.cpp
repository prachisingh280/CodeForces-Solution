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
    long long d = 0;
    bool found = false;
    for(long long i=0; i<n-1; i++)
    {
        if(arr[i] != i+1)
        {
            d = arr[i] - (i+1);
            arr[i+1] = arr[i+1] + d;
            arr[i] -= d;
        }
        if(arr[i] >= arr[i+1])
        {
            cout<<"NO";
            found = true;
            break;
        }
        if(arr[i]<0)
        {
            cout<<"NO";
            found = true;
            break;
        }
    }
    if(!found)
    {
        cout<<"YES";
        
    }
    cout<<"
";
    }
}