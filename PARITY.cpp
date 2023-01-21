#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int num = n % 2;
	    
	    if(num == 0){
	        cout<<"YES"<<endl;
	        
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
