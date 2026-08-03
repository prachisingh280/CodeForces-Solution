#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    long long t;
    cin>>t;
    while(t--)
    {
       long long a,b;
       cin>>a>>b;
       
       if(a==b)
       {
           cout<<"0 0"<<"
";
           continue;
       }
       
       if(a==0 && b!=0)
       {
            cout<<b<<" 0"<<"
";
            continue;
       }
       
       if(a!=0 && b==0)
       {
            cout<<a<<" 0"<<"
";
            continue;
       }
       
       if(a-b==1)
       {
           cout<<"1 0"<<"
";
           continue;
       }
       
       long long diff = abs(a-b);
       long long maxx = max(a,b);
       long long rem = maxx % diff;
       long long step1 = rem;
       long long x = b-rem;
       long long y = x + diff;
       long long step2 = y-b;
       long long ans = min(step1,step2);
       
       cout<<diff<<" "<<ans<<"
";
       
        
    }
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 