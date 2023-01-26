#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int r1,r2,r3,r4;
	    cin>>r1>>r2>>r3>>r4;
	    if(r1==0 && r2==0 && r3==0 && r4==0){
	        cout<<"IN"<<endl;
	    }
	    else{
	        cout<<"OUT"<<endl;
	    }
	}
	return 0;
}
