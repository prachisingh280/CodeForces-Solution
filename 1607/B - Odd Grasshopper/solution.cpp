#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,x;
        cin>>x>>n;
        long long rem = n%4;
        long long sum = 0;
        
        if(x%2==0)
        {
            long long j = 1;
            for(long long i = n-rem+1; i<=n; i++)
            {
                if(j==1)
                {
                    sum -= i;
                    j++;
                }
                else if(j==2)
                {
                    sum += i;
                    j++;
                }
                else
                {
                    sum += i;
                    j++;
                }
            }
        }
        else
        {
            long long j = 1;
            for(long long i = n-rem+1; i<=n; i++)
            {
                if(j==1)
                {
                    sum += i;
                    j++;
                }
                else if(j==2)
                {
                    sum -= i;
                    j++;
                }
                else
                {
                    sum -= i;
                    j++;
                }
            }
        }
        
        cout<<sum+x<<"
";
    }
}