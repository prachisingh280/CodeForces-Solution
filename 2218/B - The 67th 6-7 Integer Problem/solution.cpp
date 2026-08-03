#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
	int x,y,t; 
	int arr[7],brr[7];
	cin>>t;
	for(int i=1; i<=t; i++)
	{
	        
	    for(int p=0; p<7; p++)
	    {
	        cin>>arr[p];
	        
	    }
	    int maxi = *max_element(arr,arr+7);
	    int sum;
	    sum = accumulate(arr,arr+7,0);
	    int nsum = (sum - maxi);
	    int msum = -1*(nsum);
	    sum = msum + maxi;
	    
	    cout<<sum<<"
";
	
	    
	}
}