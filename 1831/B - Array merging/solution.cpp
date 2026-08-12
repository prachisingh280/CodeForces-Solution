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
        int arr[n];
        int brr[n];
        vector<int> hash_arr((2*n)+1,0);
        vector<int> hash_brr((2*n)+1,0);
        
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        
        for(int i=0; i<n; i++)
        {
            cin>>brr[i];
        }
        
        int cnt = 1;
        for(int i=0; i<n; i++)
        {
            if(i==n-1)
            {
                hash_arr[arr[i]] = max(cnt,hash_arr[arr[i]]);
                break;
            }
            if(arr[i]==arr[i+1])
            {
                cnt++;
            }
            else
            {
                hash_arr[arr[i]] = max(cnt,hash_arr[arr[i]]);
                cnt = 1;
            }
        }
        cnt = 1; 
        for(int i=0; i<n; i++)
        {
            if(i==n-1)
            {
                hash_brr[brr[i]] = max(cnt,hash_brr[brr[i]]);
                break;
            }
            if(brr[i]==brr[i+1])
            {
                cnt++;
            }
            else
            {
                hash_brr[brr[i]] = max(cnt,hash_brr[brr[i]]);
                cnt = 1;
            }
        }
        int ans = 0;
        for(int i=0; i<=2*n; i++)
        {
            int sum = hash_arr[i]+hash_brr[i];
            ans = max(ans,sum);
        }
        
        cout<<ans<<"
";
    }
    
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 