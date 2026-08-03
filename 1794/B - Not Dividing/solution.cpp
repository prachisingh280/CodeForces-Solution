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
        for(int i=0; i<n; i++)
        {
            if(arr[i] == 1)
            {
                arr[i]++;
            }
        }
        int op = 2*n;
        int i = 0;
        while(op!=0 && i<n-1)
        {
            
            if(arr[i+1]%arr[i] == 0)
            {
                arr[i+1] = arr[i+1] + 1;
                op--;
            }
            i++;
        }
        
        for(int j=0; j<n; j++)
        {
            cout<<arr[j]<<" ";
        }
        cout<<"
";
    }
}