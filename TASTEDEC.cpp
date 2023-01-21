#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int sum = 2 * x;
	    int dim = 5 * y;
	    if(sum > dim){
	        cout<<"Chocolate"<<endl; 
	    }
	    else if(sum == dim){
	        cout<<"Either"<<endl;
	    }
	    else{
	        cout<<"Candy"<<endl;
	    }
	}
	return 0;
}
