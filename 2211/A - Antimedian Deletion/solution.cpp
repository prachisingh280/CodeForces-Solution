#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
       int n;
       cin>>n;
       int arr[n];
       for(int i=0; i<n; i++)
       {
           cin>>arr[n];
       }
       if(n<2) 
       {
           for(int i=0; i<n; i++)
           {
               cout<<"1"<<" ";
           }
       }
       else
       {
           for(int i=0; i<n; i++)
           {
               cout<<"2"<<" ";
           }
       }
       cout<<"
";
        
        
    }
 
}