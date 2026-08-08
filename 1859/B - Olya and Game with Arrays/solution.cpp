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
        vector<vector<long long>>arr(n);
        for(long long i=0; i<n; i++)
        {
            long long m;
            cin>>m;
            for(long long j=0; j<m; j++)
            {
                long long x;
                cin>>x;
                arr[i].push_back(x);
            }
        }
        
        for(auto &v : arr)
        {
            sort(v.begin(),v.end());
        }
        
        vector<long long>minn; vector<long long>sminn;
        
        for(auto &v : arr)
        {
            minn.push_back(v[0]);
            sminn.push_back(v[1]);
        }
        long long ans = *min_element(minn.begin(),minn.end());
        long long removee = *min_element(sminn.begin(),sminn.end());
        
        for(long long i=0; i<n; i++)
        {
            ans = ans+sminn[i];
        }
        ans = ans - removee;
        cout<<ans<<"
";
    }
}