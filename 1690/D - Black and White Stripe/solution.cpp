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
        int k;
        cin>>k;
        string s;
        cin>>s;
        
        vector<int>prefix_sum(n+1,0);
        
        for(int i=0; i<n; i++)
        {
            prefix_sum[i+1] = prefix_sum[i] + (s[i]=='W');
        }
        
        int final_ans = INT_MAX;
        
        for(int i=0; i<=(n-k); i++)
        {
            int ans = prefix_sum[i+k] - prefix_sum[i];
            final_ans = min(ans,final_ans);
        }
        
        cout<<final_ans<<"
";
    }
}