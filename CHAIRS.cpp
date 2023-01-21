#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x , y;
	    cin>>x>>y;
	    int dif = x - y;
	    
	    if(dif >= 0){
	        cout<<dif<<endl;
	    }
	    else{
	        cout<<"0"<<endl;
	    }
	    
	}
	return 0;
}
