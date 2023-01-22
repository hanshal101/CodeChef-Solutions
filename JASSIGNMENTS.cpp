#include <iostream>
using namespace std;

int main() {
	// your code goes here
	// tt is Time taken
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    int tt = 10 - x;
	    if(tt>=3){
	        cout<<"YES"<<endl;
	        
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
