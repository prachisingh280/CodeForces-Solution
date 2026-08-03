#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n,k,sum=0,ksum;
        cin>>n;
        cin>>k;
        int arr[n];
        
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            sum = sum+arr[i];
        }
        ksum = n*k;
        
        if(sum%2!=0 || ksum%2==0)
        {
            cout<<"Yes"<<"
";
        }
        
        else
        cout<<"No"<<"
";
        
        
        
    }
 
}