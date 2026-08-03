#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[10];
        int sum = 0;
        vector < string > grid(10);
 
        for (int i = 0; i < 10; i++)
        {
            cin >> grid[i];
        }
        int d = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (grid[i][j] == 'X')
 
                {
                    d = min(min(i,j),min(9-i,9-j));
                    sum = sum + d + 1;
                }
            }
 
 
        }
        cout << sum << "
";
    }
 
 
 
}