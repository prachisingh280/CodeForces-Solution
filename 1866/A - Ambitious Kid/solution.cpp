#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
     
         int n;
          cin>>n;
          int arr[n];
          
          for(int i=0; i<n; i++)
          {
              cin>>arr[i];
          }
          
          int minn = arr[0];
          
          for(int i=0; i<n; i++)
          {
              if(abs(arr[i])<abs(minn))
              minn = arr[i];
          }
          int count = 0;
          
          if(minn>=0)
          {
             while(minn--)
             {
                 count++;
             }
          }
          else
          {
              for(int i=1; i<=(-1)*minn; i++)
              {
                
                  count++;
              }
          }
          
         cout<<count<<"
";
         
         
     }