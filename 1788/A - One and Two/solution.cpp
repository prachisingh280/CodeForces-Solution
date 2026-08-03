#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long t;
    cin>>t;
    
    while(t--)
    {
        int n;
        int twos = 0;
        int count = 0;
        cin>>n;
        int arr[n];
        
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i] == 2) twos++;
        }
        
        if(twos==0)
        {
            cout<<"1"<<"
";
            continue;
        }
        if(twos%2!=0)
        {
            cout<<"-1"<<"
";
            continue;
        }
        
        else
        {
            for(int i=0; i<n; i++)
            {
               if(arr[i]==1)
               {
                   
                   continue;
               }
               
               count++;
               if(count == twos/2)
               {
                   cout<<i+1<<"
";
                   break;
               }
            }
        }
    }
}