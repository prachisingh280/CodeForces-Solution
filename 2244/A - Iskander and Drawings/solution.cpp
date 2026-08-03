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
        string s;
        cin >> s;
        int cnt = 0;
        int timee = 0;
 
        for (int i = 0; i < n; i++)
        {
            
            if (s[i] == '#')
            {
                cnt++;
            }
            else
            {
                if (cnt > 0)
                {
                    if (cnt == 1 || cnt == 2)
                    {
                        timee = max(timee, 1);
                    }
                    else
                    {
                        timee = max(timee, (cnt - 1) / 2 + 1);
                    }
                    cnt = 0; // Reset for the next segment
                }
            }
 
        }
        if (cnt > 0)
        {
            if (cnt == 1 || cnt == 2)
            {
                timee = max(timee, 1);
            }
            else
            {
                timee = max(timee, (cnt - 1) / 2 + 1);
            }
        }
        
 
        cout << timee << "
";
    }
}