#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    if(n>m){
	        cout<<m+(2*(n-m))<<endl;
	    }
	    else{
	        cout<<n<<endl;
	    }
	    
	}
	return 0;
}
