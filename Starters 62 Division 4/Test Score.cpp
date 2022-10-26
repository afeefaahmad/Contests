#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;  
	cin>>t;
	while(t--){
	    int n,x,y; //n0.of questin  max marks    required
	    cin>>n>>x>>y;
	    if(y%x ==0) {
	        if(n>=y/x) 
	        cout<<"yes"<<endl;
	        else 
	        cout<<"no"<<endl;
	    }
	   else  cout<<"no"<<endl; 
	    
	}
	return 0;
}
