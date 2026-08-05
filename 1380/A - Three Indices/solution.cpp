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
        
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        bool found = false;
        
        for(int i=1; i<n-1; i++)
        {
            if(arr[i-1]<arr[i] && arr[i]>arr[i+1])
            {
                cout<<"YES"<<"
";
                cout<<i-1+1<<" "<<i+1<<" "<<i+1+1<<"
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