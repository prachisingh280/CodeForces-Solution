#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
 
        long long n, a = 0;
        cin >> n;
 
        vector < long long > v(n);
 
        for (long long i = 0; i < n; i++)
        {
            cin >> v[i];
        }
 
        sort(v.begin(), v.end());
 
        if (v[0] == v[n - 1])
        {
            cout << "-1"<<"
";
            continue;
        }
        
        long long minn = * min_element(v.begin(), v.end());
 
        for (long long m = 0; m < n; m++)
        {
            if (v[m] > minn)
            {
                a = m;
                break;
            }
        }
 
       
 
        vector < long long > b(v.begin(), v.begin() + a);
        vector < long long > c(v.begin() + a, v.begin() + n);
 
        cout << b.size() << " ";
        cout << c.size() << "
";
 
        for (long long i = 0; i < b.size(); i++)
        {
            cout << b[i] << " ";
        }
 
        cout << "
";
 
        for (long long i = 0; i < c.size(); i++)
        {
            cout << c[i] << " ";
        }
 
    cout << "
";
    }
 
 
 
 
}