#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    long long n;
    cin>>n;
    long long d;
    cin>>d;
    long long arr[n];
    for(long long i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    long long r = n-1;
    long long l = 0;
    long long team_cnt = 0;
    
    if(arr[l]>d)
    {
        cout<<n<<"
";
    }
    else if((arr[r] * n) <= d)
    {
        cout<<"0"<<"
";
    }
    else
    {
    while(l<=r)
    {
        if(l==r)
        {
            if(arr[l]>d)
            {
            team_cnt++;
            break;
            }
            else
            {
                break;
            }
        }
        
        long long rem = d/arr[r];
        if((r-l)>=rem)
        {
        l = l+rem;
        r--;
        team_cnt++;
        }
        else
        {
            break;
        }
    }
    cout<<team_cnt<<"
";
    
}
}