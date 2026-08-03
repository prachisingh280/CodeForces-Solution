#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    long long t;
    cin>>t;
    
    while(t--)
    {
        unordered_map<long long,long long>mpp;
        long long n;
        cin>>n;
        long long k;
        cin>>k;
        string s;
        cin>>s;
        
        if(n==1)
        {
            cout<<"YES"<<"
";
            continue;
        }
        long long odd = 0;
        for(long long i=0; i<s.size(); i++)
        {
            mpp[s[i]]++;   
        }
        
        for(auto i = mpp.begin(); i!=mpp.end(); i++)
        {
            if(i->second%2!=0)
            {
                odd++;
            }
        }
        
        if(odd-1>k)
        {
            cout<<"NO"<<"
";
        }
        else
        {
            cout<<"YES"<<"
";
        }
        
    }
}