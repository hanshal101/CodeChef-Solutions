#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int z = x + 200;
	    
	    if (y>=x && y<=z){
	        cout<<"YES"<<endl;
	        
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
