#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,k,b,s;
        cin>>n>>k>>b>>s;
        
        if(s>((k*b)+(k-1)*n) || s<(k*b))
        {
            cout<<-1<<"
";
            continue;
        }
        
        vector<long long>ans(n,0);
        ans[0] = k*b;
        long long rem = s-(k*b);
        
        for (int i = 0; i < n; i++) {
        long long add = min(rem, k - 1);
        ans[i] += add;
        rem -= add;
    }
 
    for (int i = 0; i < n; i++) {
        cout << ans[i] << (i == n - 1 ? "" : " ");
    }
    cout << "
";
    }
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 