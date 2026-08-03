#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int>v(n);
	    vector<int>cv(n);
	    
	    for(int i=0; i<n; i++)
	    {
	        cin>>v[i];
	    }
	    
	    sort(cv.begin(),cv.end());
	    if(cv == v)
	    {
	         cout<<n-1<<"
";
	        continue;
	    }
	    
	   
	    int count = 0;
	    bool found = false;
	    
	    for(int i=0; i<v.size()-1; i++)
	    {
	        if((v[i]%2==0 && v[i+1]%2==0) || (v[i]%2!=0 && v[i+1]%2!=0))
	        {
	            v.insert(v.begin()+i,v[i]*v[i+1]);
	            v.erase(v.begin()+i+1,v.begin()+i+3);
	            i--;
	            count++;
	            
	        }
	        else
	        {
	           continue;
	        }
	    }
	    
	   
	    cout<<count<<"
";
	    
	}
 
}