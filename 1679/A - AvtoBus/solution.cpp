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
        
        if(n<4 || n%2!=0)
        {
            cout<<"-1"<<"
";
            continue;
        }
        
        long long maxx = 0;
        long long minn = 0;
        
        maxx = n/4;
        
        if(n%6==0)
        {
            minn = n/6;
        }
        else if(n%6==2 || n%6==4)
        {
            minn = (n/6) + 1;
        }
        
        cout<<minn<<" "<<maxx;
        cout<<"
";
        
        
    }
}