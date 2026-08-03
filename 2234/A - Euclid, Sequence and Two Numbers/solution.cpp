#include <bits/stdc++.h>
using namespace std;
 
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
	    long long n,mod1 = 0,mod2 = 0;
	    cin>>n;
	    long long arr[n];
	    vector<long long>v;
	    
	    for(long long i=0; i<n; i++)
	    {
	        cin>>arr[i];
	    }
	    
	    if(n==2)
	    {
	        long long maxx = max(arr[0],arr[1]);
	        long long minn = min(arr[0],arr[1]);
	        cout<<maxx<<" "<<minn<<"
";
	        continue;
	    }
	    sort(arr,arr+n,greater<long long>());
	    
	    bool found = true;
	    long long notfound = 0;
	    
	   for(long long i=0; i<n-2; i++)
	   {
	       mod1 = arr[i] % arr[i+1];
	       
	       
	           notfound = 0;
	       for(long long j=i+2; j<n; j++)
	       {
	           if(arr[j] == mod1)
	           {
	               v.push_back(arr[i]);
	               v.push_back(arr[i+1]);
	               swap(arr[j],arr[i+2]);
	               continue;
	           }
	           else
	           {
	               notfound++;
	           }
	       }
	       
	       if(notfound == n-(i+2))
	    {
	        found = false;
	        break;   
	    }
	    
	   }
	    
	    
	    if(found)
	    {
	        cout<<v[0]<<" "<<v[1]<<"
";
	    }
	    else
	    {
	        cout<<"-1"<<"
";
	        continue;
	    }
	    
	}
 
}