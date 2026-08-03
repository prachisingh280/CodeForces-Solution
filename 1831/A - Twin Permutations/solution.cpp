#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int brr[n];
       
       int p = n+1;
       
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
           
        }
        
        for(int i=0; i<n; i++)
        {
            brr[i] = p - arr[i];
        }
        
        for(int i=0; i<n; i++)
        {
            cout<<brr[i]<<" ";
           
        }
       
       cout<<"
";
    }
    
}