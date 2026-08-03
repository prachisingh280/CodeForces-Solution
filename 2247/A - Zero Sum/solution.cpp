#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int neg = 0;
        int pos = 0;
        
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i]<0)
            {neg++;}
            else
            {pos++;}
        }
        
        int d = pos - neg;
        if(n%2!=0 || d%4!=0)
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