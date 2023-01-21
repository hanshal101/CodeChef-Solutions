#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int z = y-x;
	    if(z>=0){
	        cout<<z<<endl;
	    }
	    else{
	        cout<<x-y<<endl;
	    }
	}
	return 0;
}
