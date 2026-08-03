#include <bits/stdc++.h>
using namespace std;
 
int main() {
	long long n,t; 
	cin>>t;
	for(long long i=1; i<=t; i++)
	{
	    cin>>n;
	    long long arr[3*n];
        for(long long i=0; i<3*n; i++)
        {
            arr[i]=i+1;
        
        }
	    int low = arr[0], high = arr[3*n-1], med = high-1;
	    
        
        for(long long i=0; i<3*n; i++)
        {
            if(low<n+1)
            {
             cout<<low<<" ";
             cout<<med<<" ";
             cout<<high<<" ";
             low++;
             high = high - 2;
             med = high - 1;
            }
            
        }
       
        
	    cout<<"
";
	}
 
}