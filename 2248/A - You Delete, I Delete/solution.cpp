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
        int cnt0 = 0;
        int cnt1 = 0;
        vector<char>prachii;
        
        
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='0' && cnt0 == 0)
            {
                cnt0++;
                continue;
            }
            if(s[i]=='1' && cnt1 == 0)
            {
                cnt1++;
                continue;
            }
            prachii.push_back(s[i]);
        }
        
        for(int i=0; i<prachii.size(); i++)
        {
            cout<<prachii[i];
        }
        cout<<"
";
        
    }
}