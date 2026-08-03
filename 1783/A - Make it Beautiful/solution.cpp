#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int t;
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
        
        if(arr[0]==arr[n-1])
        {
            cout<<"NO"<<"
";
            continue;
        }
        
        
        sort(arr, arr + n, greater < int > ());
        bool found = false;
 
        for (int i = 0; i <= 4; i++)
        {
            if (arr[i] == arr[i + 1])
            {
                swap(arr[i], arr[n - 1]);
                found = true;
                break;
            }
            
        }
        
        if(!found)
        {
            cout<<"YES"<<"
";
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout<<"
";
        }
        if (found)
        {
            cout<<"YES"<<"
";
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout<<"
";
        }
 
 
    }
 
}