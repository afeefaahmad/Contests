#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--) {
	    int a,b;
	    cin>>a>>b;
	    if(b%a) {
	        if(b>2*a)
	        cout<<"yes"<<endl;
	        else 
	        cout<<"no"<<endl;
	    }
	    else{
	        cout<<"yes"<<endl;
	    }
	}
	return 0;
}
