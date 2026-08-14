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
    char c;
    cin>>c;
    string s;
    cin>>s;
    vector<int>ans;
    vector<int>g;
    
    for(int i=0; i<n; i++)
    {
        if(s[i] == 'g')
        {
            g.push_back(i+1);
        }
    }
 
    for(int i=0; i<n; i++)
    {
        if(s[i]==c)
        {
            for(int j=0; j<g.size(); j++)
            {
                if(g[j]>=i+1)
                {
                    ans.push_back(g[j]-(i+1));
                    break;
                }
                else if((i+1)>(g[g.size()-1]))
                {
                    ans.push_back(n-(i+1)+g[0]);
                    break;
                }
            }
        }
    }
    
    int ansss = *max_element(ans.begin(),ans.end());
    cout<<ansss<<"
";
}
}
 
 
 
 
 
 
 
 
 
 
 
 
 