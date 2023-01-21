#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    int total = 5*x + 10*y;
	    int choco = total / z;
	    cout<<choco<<endl;
	}
	return 0;
}
