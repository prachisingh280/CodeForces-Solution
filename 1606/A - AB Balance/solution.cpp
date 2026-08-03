#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
   int t;
   cin>>t;
   while(t--)
   {
       string s;
       cin>>s;
       int n = s.size();
       
         if(s[0]==s[n-1])
         {
             for(int i=0; i<n; i++)
             {
                 cout<<s[i];
             }
         }
         else
         {
             s[0] = s[n-1];
             
             for(int i=0; i<n; i++)
             {
                 cout<<s[i];
             }
         }
         
       
       
       cout<<"
";
   }
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 