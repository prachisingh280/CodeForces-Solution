#include <bits/stdc++.h>
using namespace std;
 
    bool check(int x)
    {
        int zeroes = 0;
        int totals = 0;
        while(x)
        {
           if(x%10==0)
           {
               zeroes++;
               totals++;
           }
           
          else
          {
              totals++;
          }
           
           x = x/10;
            
        }
        return zeroes == totals-1;
    }
int main()
{
 
     vector<int>round_numbers;
     for(int i=1; i<=999999; i++)
     {
         if(check(i)==true)
         {
             round_numbers.push_back(i);
         }
     }
 
 
 
    int t;
    cin>>t;
    while(t--)
    {
        int n,ans=0;
        cin>>n;
        
        for(int i = 0; i<round_numbers.size(); i++)
        {
            if(round_numbers[i] <= n)
            ans++;
            else
            break;
        }
        cout<<ans<<"
";
    }
    return 0;
}