#include <bits/stdc++.h>
using namespace std;
 
int main()
{
     long long t;
     cin>>t;
     while(t--)
     {
         long long n;
         cin>>n;
         long long arr[n];
         
         for(long long i=0; i<n; i++)
         {
             cin>>arr[i];
         }
         
         long long d,minn = arr[1] - arr[0];
         bool found = false;
         
         
         for(long long i=1; i<n; i++)
         {
            
             d = arr[i] - arr[i-1];
             if(d<0) 
             {
                 found = true;
                 
             }
             minn = min(d,minn);
             
         }
         
         if(found) cout<<"0"<<"
";
         else
         cout<<minn/2+1<<"
";
         
         
     }
 
}