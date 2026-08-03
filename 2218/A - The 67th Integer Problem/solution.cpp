#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
	int x,y,t; 
	cin>>t;
	for(int i=1; i<=t; i++)
	{
	    cin>>x;
	    y=x+1;
	    if(y<=67 && y>=-67)
	    {
	    cout<<y<<"
";
	    }
	    else cout<<x<<"
";
	}
}