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
        int ncount = 0,pcount = 0, op = 0;
        
        int sum = -1*ncount + pcount;
        
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i]<0) ncount++;
            else pcount++;
        }
        
        while(ncount>pcount || ncount%2==1)
        {
            op++;
            pcount++;
            ncount--;
        }
       
        cout<<op<<"
";
    }
        
                
 
}