#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;
        int hcount = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.')
            {
                if (s[i + 1] == '.' && s[i + 2] == '.')
                {
                    cout << "2";
                    break;
                }
                else count++;
            }
            else
            {
                hcount++;
                
            }
 
            if (i == n - 1) cout << count;
            if (hcount == n) break;
        }
 
        cout << "
";
 
    }
 
}