#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    long long t;
    cin>>t;
    while(t--)
    {
         long long n,x,y,z,timee = 0;
         cin>>n>>x>>y>>z;
         
         if(x+y>=n)
         {
             timee = 1;
         }
         
         else if (x+y<n   )
         {
             if(n%(x+y)==0)
             {
                 timee = n/(x+y);
             }
             else
             {
                 timee = n/(x+y) + 1;
             }
         }
         
         long long ai_time    = z;
         long long new_n = n;
         
             new_n = n -(z*x);
             if((10*y+x)>=n)
             {
                 ai_time += 1;
             }
             else
             {
                 new_n = n-(z*x);
                 while(new_n>0)
                 {
                     ai_time++;
                      new_n = new_n-(10*y+x);
                     
                 }
             }
         cout<<min(timee,ai_time)<<"
";
         
    }
}