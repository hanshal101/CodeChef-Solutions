#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
	    int a,b;
	    cin>>a>>b;
	    int z=0;
	    z=21-(a+b);
	    if(z>0 && z<11){
	        cout<<z<<endl;
	        
	    }
	    else{
	        cout<<-1<<endl;
	    }
	}
	return 0;
}