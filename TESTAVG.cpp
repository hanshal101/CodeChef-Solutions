#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if((a+b)/2 <35){
	        cout<<"Fail"<<endl;
	    }
	    else if((b+c)/2 <35){
	        cout<<"Fail"<<endl;
	    }
	    else if((a+c)/2 <35){
	        cout<<"Fail"<<endl;
	    }
	    else{
	        cout<<"Pass"<<endl;
	    }
	}
	return 0;
}
