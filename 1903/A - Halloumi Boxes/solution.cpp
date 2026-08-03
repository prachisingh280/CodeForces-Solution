#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long t;
    cin >> t;
    for (long long i = 0; i < t; i++)
    {
        long long n;
        cin >> n;
        long long arr[n];
        long long k;
        cin >> k;
 
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int count=0;
        for (int i = 0; i < n - 1; i++)
        {
            if(arr[i] > arr[i + 1])
            {
                break;
            }
            else
            {
                count++;
            }
 
        }
        if (count == n - 1 || n==1)
        {
            cout << "YES";
            
        }
        else
        {
            if (k == 1) cout << "NO";
            else cout << "YES";
        }
 
 
        cout << "
";
 
    }
 
}