#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x,k;
	    cin>>n>>x>>k;
	    int tw = k/x;
	    if(n>tw){
	        cout<<tw<<endl;
	        }
	    else{
	        cout<<n<<endl;
	    }
	}
	return 0;
}
