#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        cin>>s1;
        string s2;
        cin>>s2;
        int n = s1.size();
        int m = s2.size();
        bool found = false;
        int count = 0;
        
        int i = m-1;
        for(int k=n-1; k>=0; k--)
        {
            for(int j=i; j>=0; j--)
            {
                if(s2[i]==s1[k])
                {
                    count++;
                    i--;
                    break;
                }
                else if(s2[j] == s1[k])
                {
                    found = true;
                    break;
                }
            }
            if(found)
            {
                break;
            }
        }
        if(!found && count == m)
        {
            cout<<"YES"<<"
";
        }
        else
        {
            cout<<"NO"<<"
";
        }
    }
}