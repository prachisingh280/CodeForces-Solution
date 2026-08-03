#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    long long t;
    cin>>t;
    while(t--)
    {
       int n,m,i,j;
       cin>>n>>m>>i>>j;
       vector<vector<int>>ans;
       
       ans = {{1,1},{n,1},{1,m},{n,m}};
       sort(ans.begin(),ans.end());
       
       cout<<ans[0][0]<<" "<<ans[0][1]<<" "<<ans[3][0]<<" "<<ans[3][1];
       cout<<"
";
        
    }
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 