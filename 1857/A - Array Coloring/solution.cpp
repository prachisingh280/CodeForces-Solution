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
         
         for(int i=0; i<n; i++)
         {
             cin>>arr[i];
         }
         
         int sumo = 0;
         int sume = 0;
         
         for(int i=0; i<n; i++)
         {
             if(arr[i]%2 != 0)
             {
                 sumo = sumo + arr[i];
             }
         }
         if(sumo%2 == 0)
         {
             cout<<"yes";
         }
         else
         {
             cout<<"no";
         }
         
         cout<<"
";
     }
 
}