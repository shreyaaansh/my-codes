#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int sum=0;
	while(t>0)
    {
        int n,r;
	    cin>>n;
        
	    while(n>0)
	    {
	        
	        r=n%10;
	        sum=sum*10 +r;
            n=n/10;
	        
	    }
	    cout<<sum;
	    sum=0;
        t=t-1;
	}
	return 0;
}
