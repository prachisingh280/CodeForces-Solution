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
        int arr[n];
        vector<int>diff;
        
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        
        for(int i=0; i<n; i++)
        {
            int d = abs(arr[i] - (i+1));
            diff.push_back(d);
        }
        
        int g = diff[0];
        
        for(int i=1; i<diff.size(); i++)
        {
            g = gcd(diff[i],g);
        }
        
        cout<<g<<"
";
    }
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 