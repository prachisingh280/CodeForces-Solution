/******************************************************************************
 
                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.
 
*******************************************************************************/
 
#include <iostream>
using namespace std;
int main()
{
        int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        long long count = 0;
        long long ncount = 0;
        
        for(long long i=1; i<s.size(); i++)
        {
            if(s[i]==s[0])
            {
                count++;
                ncount++;
            }
            else
            {
                ncount++;
                continue;
            }
        }
        
        if(count==ncount)
        {
            cout<<"10"<<"
";
            continue;
        }
        
        else if(s.size()==2)
        {
            cout<<"101"<<"
";
        }
        else
        {
            cout<<"1";
            for(long long i=1; i<s.size(); i++)
            {
                cout<<"0";
            }
            cout<<"1";
            cout<<"
";
        }
    }
}