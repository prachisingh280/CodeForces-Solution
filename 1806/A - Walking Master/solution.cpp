#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
     int t;
     cin>>t;
     while(t--)
     {
         int a,b,c,d;
         cin>>a>>b>>c>>d;
         
         if(b>d)
         {
             cout<<"-1"<<"
";
             continue;
             
         }
         
         int x = d - b;
         a = a + x;
         int y = a - c;
         if(y<0)
         {
             cout<<"-1"<<"
";
             continue;
             
         }
         
         int count = x + y;
         cout<<count<<"
";
         
     }
 
}