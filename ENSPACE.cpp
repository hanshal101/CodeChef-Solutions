#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x,y;
	    cin>>n>>x>>y;
	    int z= y* 2;
	    int sum = x + z;
	    
	    if(sum > n){
	        printf("NO\n");
	    }
	    else{
	        printf("YES\n");
	    }
	}
	return 0;
}
