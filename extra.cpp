#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long int t;
	
	cin>>t;
	while(t--)
	{
	    long long int n,x,max;
	    cin>>n>>x;
	   // int max=x;
       long long int a[n];
	    max=x;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	       x=x+a[i];
	       if(x>max)
	       max=x;
	       
	    }
	    cout<<max<<endl;
	}
	return 0;
}
