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
          vector<long long>v(n),a;
          
          for(long long i=0; i<n; i++)
          {
              cin>>v[i];
          }
          
          a.push_back(v[0]);
          for(int i=1; i<n; i++)
          {
              if(v[i-1]<=v[i])
              {
                  a.push_back(v[i]);
              }
              else
              {
                  a.push_back(v[i]);
                  a.push_back(v[i]);
              }
          }
          
          cout<<a.size()<<"
";
           for(long long i=0; i<a.size(); i++)
          {
              cout<<a[i]<<" ";
          }
          cout<<"
";
         
     }
}