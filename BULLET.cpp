#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    int tp = z - y/x;
	    if(z>(y/x))
		{
			cout<<z-(y/x)<<endl;
		}
	    else{
	        cout<<"0"<<endl;
	    }
	}
	return 0;
}
