#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    int tt = x*y;       //tt is the total time taken without breaks
	    int tb = x/3;       //bt is the total number for breaks taken
	    int ttb = tb * z;   //ttb is the total time with break
	    
	     if (x <= 3) {
	         cout<<tt<<endl;
	     }
	    else if (x%3 == 0) {
	        cout<<tt + ttb - z<<endl; 
	    }
	    else {
	        cout<<tt + ttb<<endl;
	    }
	}
	return 0;
}
