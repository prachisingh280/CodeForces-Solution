#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    long long t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int>prefix_sum(n+1,0);
        vector<int>suffix_sum(n+1,0);
        unordered_set<char>st;
        
        for(int i=0; i<n; i++)
        {
            st.insert(s[i]);
            prefix_sum[i] = st.size();
        }
        
        st.clear();
        
        for(int i=n-1; i>=0; i--)
        {
            st.insert(s[i]);
            suffix_sum[i] = st.size();
        }
        int sum = 0;
        for(int i=0; i<n; i++)
        {
            sum = max(sum,prefix_sum[i]+suffix_sum[i+1]);
        }
        
        cout<<sum<<"
";
    }
    
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 