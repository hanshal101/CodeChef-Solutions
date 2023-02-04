#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int n = x/y;
	    int f = x - n*y;
	    
	    if(x%y==0){
	        cout<<x/y<<endl;
	        
	    }
	    else if(x>y){
	        cout<<n + f<<endl;
	    }
	    else if(x<y){
	        cout<<x<<endl;
	    }
	}
	return 0;
}
