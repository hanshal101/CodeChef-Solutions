#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    int a = y/z;
	    if ( y<=z)
    {
        cout<<1*x<<endl;
    }
    else if (y%z==0)
        {
          cout<<a*x<<endl;  
        }
        
    else   
    {
        cout<<(a+1)*x<<endl;
    }
	}
	return 0;
}
