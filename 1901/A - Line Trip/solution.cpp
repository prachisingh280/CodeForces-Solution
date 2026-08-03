#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;
        int x;
        cin>>x;
        int p = n+1;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        
        vector<int>cv(p);
        for(int i=0; i<p; i++)
        {
           if(i==0) cv[i] = v[i];
           else if(i==n) cv[i] = 2*(x-v[i-1]);
           else cv[i] = v[i] - v[i-1];
           
        }
       
       
        int maxx = *max_element(cv.begin(), cv.end());
        cout<<maxx;
        
    cout<<"
";
    }
 
}