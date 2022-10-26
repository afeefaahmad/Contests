#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int a,b,c;
    int t;
    cin>>t;
    while(t--){
    cin>>a>>b>>c;
    
    int min,max;
    if(a>b && a>c) max=a;
    else if(b>a && b>c) max=b;
    else max=c;
    
    if(a<b && a<c) min=a;
    else if(b<a && b<c) min=b;
    else min=c;
    
    cout<< max-min<<endl;
    
    }
	return 0;
}
