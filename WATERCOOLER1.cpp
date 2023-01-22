#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,m;
	    cin>>x>>y>>m;
	    int mult = x * m;
	    if(mult<y){
	        cout<<"YES"<<endl;
	        
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
