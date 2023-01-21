#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x ,h;
	    cin>>x>>h;
	    
	    if (h<=x){
	        cout<<"YES"<<endl;
	    }
	    
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
