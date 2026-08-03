#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        bool found = false;
        
       
            for(int i=0; i<=n/2-1; i++)
            {
                if(s[i] == s[n-i-1])
                {
                    cout<<n-2*i<<"
";
                    found = true;
                    break;
                }
            }
            
            if(!found) 
            {
               if(n%2!=0)
               {
                   cout<<"1"<<"
";
                   continue;
               }
               else
               {
                   cout<<"0"<<"
";
                   continue;
               }
            }
        
        
      
            
            
        
    }
 
}