#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string nums;
        cin>>nums;
        
        int cnt0 = 0;
        int cnt1 = 0;
        
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]=='1')
            {
                cnt1++;
            }
            else
            {
                cnt0++;
            }
        }
        
        int cnt = min(cnt0,cnt1);
        
        if(cnt%2==0)
        {
            cout<<"NET"<<"
";
        }
        else
        {
            cout<<"DA"<<"
";
        }
    }
}