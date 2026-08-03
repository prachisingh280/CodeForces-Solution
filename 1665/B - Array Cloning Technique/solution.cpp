#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector < int > arr(n);
        map < int, int > mpp;
        int maxfreq = 0;
 
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mpp[arr[i]]++;
        }
 
        for (auto it: mpp)
        {
            maxfreq = max(maxfreq, it.second);
        }
 
        int a = maxfreq;
        int cnt = 0;
 
        while (maxfreq < n)
        {
            maxfreq = maxfreq * 2;
            cnt++;
        }
 
        int ans = cnt + n - a;
        cout<<ans<<"
";
 
    }
}