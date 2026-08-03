#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long k;
        cin>>k;
        long long arr[k];
        long long count = 0;
        
        for(long long i=0; i<k; i++)
        {
            cin>>arr[i];
        }
        
        if(k==1 && (arr[0] == 1 || arr[0] == 2))
        {
            cout<<"NO"<<"
";
            continue;
        }
        
        if(k==1 && arr[0] != 1)
        {
            cout<<"YES"<<"
";
            continue;
        }
        
        bool found = false;
        
        for(long long i=0; i<k; i++)
        {
            if(arr[i]>=3)
            {
                cout<<"YES"<<"
";
                found = true;
                break;
            }
            if(arr[i]>=2)
            {
                count++;
            }
            if(count>=2)
            {
                cout<<"YES"<<"
";
                found = true;
                break;
            }
        }
        
        if(!found)
        {
            cout<<"NO"<<"
";
        }
        
    }
    
}