#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        int arr[n];
 
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
 
        bool found = false;
 
        for (int i = n - 1; i > 0; i--)
        {
            
                while (arr[i] <= arr[i - 1])
                {
                    arr[i - 1] = arr[i - 1] / 2;
                    count++;
                    if (arr[i - 1] == 0 && arr[i] == 0)
                    {
                        cout << "-1";
                        found = true;
                        break;
                    }
                }
                if (found)
                {
                    break;
                }
            
        }
 
        if (!found)
        {
           
            cout<<count;
        }
 
        cout << "
";
    }
}