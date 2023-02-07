#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x,p;
	    cin>>n>>x>>p;
	    int cm = 3 * x;
	    int ncm = (n-x) * (-1);
	    if(cm+ncm >= p){
	        cout<<"PASS"<<endl;
	    }
	    else{
	        cout<<"FAIL"<<endl;
	    }
	}
	return 0;
}
