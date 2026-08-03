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
        
        int count = 1;
        int maxx = 0;
        
        for(int i=0; i<n-1; i++)
        {
            if(s[i]==s[i+1])
            {
                count++;
            }
            else
            {
                maxx = max(count,maxx);
                count = 1;
            }
            
        }
        
        maxx = max(count,maxx);
        
        cout<<maxx+1<<"
";
        
    }
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 