#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    long long t;
    cin>>t;
    while(t--)
    {
        vector<int>g1;
        vector<int>g2;
        vector<int>g3;
        vector<int>g4;
        vector<int>ans;
        int n;
        cin>>n;
        int arr[n];
        
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            
            if(arr[i]%6==0 || arr[i]==0)
            {
                g1.push_back(arr[i]);
            }
            else if(arr[i]%2==0 && arr[i]%3!=0)
            {
                g2.push_back(arr[i]);
            }
            else if(arr[i]%3==0 && arr[i]!=0)
            {
                g3.push_back(arr[i]);
            }
            else
            {
                g4.push_back(arr[i]);
            }
        }
        
        for(int i=0; i<g1.size(); i++)
        {
            ans.push_back(g1[i]);
        }
        
        for(int i=0; i<g2.size(); i++)
        {
            ans.push_back(g2[i]);
        }
        
        for(int i=0; i<g4.size(); i++)
        {
            ans.push_back(g4[i]);
        }
        
        for(int i=0; i<g3.size(); i++)
        {
            ans.push_back(g3[i]);
        }
        
        for(int i=0; i<n; i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<"
";
    }
}