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
        int count = 0;
        
        for(int i=0; i<n; i++)
        {
            if(found == false)
            {
                if(arr[i]!=0)
                {
                    count++;
                    found = true;
                }
            }
            else
            {
                if(arr[i]==0)
                {
                    found = false;
                }
            }
        }
        
        if(count == 0)
        {
            cout<<"0"<<"
";
        }
        else if(count == 1)
        {
            cout<<"1"<<"
";
        }
        else
        {
            cout<<"2"<<"
";
        }
    }
}