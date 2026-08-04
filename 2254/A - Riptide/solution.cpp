#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
    vector<int> arr(3);
 
    for(int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    
    if(arr[0]==arr[1] || arr[1]==arr[2] || arr[0]==arr[2])
    {
        cout<<"0"<<"
";
    }
    else
    {
    sort(arr.begin(),arr.end());
    
    int d1 = arr[2]-arr[0];
    int d2 = arr[2]-arr[1];
    int d3 = arr[1]-arr[0];
    int cnt = 0;
    while(1)
    {
        d1 = d1-2;
        d2 = d2-1;
        d3 = d3-1;
        cnt++;
        if(d1==0 || d2==0 || d3==0)
        {
            cout<<cnt<<"
";
            break;
        }
    }
    }
}
}