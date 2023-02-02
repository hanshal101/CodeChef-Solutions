#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,na,nb,nc,nd;
	    cin>>n>>na>>nb>>nc>>nd;
	    if(na>=nb && na>=nc &&na>=nd){
	        std::cout << na << std::endl;
	    
	}
	    else if(nb>=na && nb>=nc &&nb>=nd){
	        std::cout << nb << std::endl;
	    
	}   else if(nc>=nb && nc>=na &&nc>=nd){
	        std::cout << nc << std::endl;
	    
	}
	    else{
	        
	        cout<<nd<<endl;
	}
	}
	return 0;
}

