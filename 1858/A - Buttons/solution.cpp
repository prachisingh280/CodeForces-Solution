#include <bits/stdc++.h>
using namespace std;
 
int main()
{
     long long t;
     cin>>t;
     while(t--)
     {
         long long a,b,c;
         cin>>a>>b>>c;
         
         long long suma = a+c;
         long long sumb = b+c;
         if(suma>sumb)
         {
             cout<<"First";
             
         }
         else if(sumb>suma)
         {
             cout<<"Second";
         }
         else
         {
             if(c%2!=0)
             {
                 cout<<"First";
             }
             else
             {
                 cout<<"Second";
             }
         }
        
         
         cout<<"
";
         
     }
 
}