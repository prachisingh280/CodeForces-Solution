#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        
        int zeroes = 0;
        int maxlength = 0;
        for(int i=0; i<n; i++)
        {
            if(arr[i] == 0)
            {
                zeroes++;
            }
            else
            zeroes=0;
            
            maxlength = max(maxlength,zeroes);
        }
        
        cout<<maxlength<<"
";
        
    }
 
}