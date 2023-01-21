#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,a,b;
	cin>>n>>a>>b;
	
	int tr = n - (a+b);
	
	cout<<b + tr <<" "<< tr <<endl;
	return 0;
}
