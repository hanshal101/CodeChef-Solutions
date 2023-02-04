#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,m,s;
	    cin>>n>>k>>m; // n candies, a bag has k pockets , each pockets can hold m candies
	    s=k*m;
	    if(n%s==0)
	    {
	        cout<<n/s<<endl;
	    }
	    else
	    {
	        cout<<(n/s)+1<<endl;
	    }
	    
	}
	return 0;
}