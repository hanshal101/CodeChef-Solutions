#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	double a,b,c,d;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c>>d;
	    if(a/b>c/d)
	    cout<<"ALICE"<<endl;
	    else if(a/b<c/d)
	    cout<<"BOB"<<endl;
	    else
	    cout<<"EQUAL"<<endl;
	}
	return 0;
}