#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        
        vector<int>v(n);
        vector<int>cv(n);
        
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
 
        }
         
        cv = v;
        sort(cv.begin(), cv.end());
        if(v[0] == cv[0])
        cout<<"yes";
        else
        cout<<"no";
        
        cout<<"
";
    }
 
}