#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x , y;
	    cin>>x>>y;
	    int diff = y-x;
	    if(diff > 0){
	        cout<<"PROFIT"<<endl;
	        
	    }
	    else if(diff < 0){
	        cout<<"LOSS"<<endl;
	    }
	    else{
	        cout<<"NEUTRAL"<<endl;
	    }
	    
	}
	return 0;
}
