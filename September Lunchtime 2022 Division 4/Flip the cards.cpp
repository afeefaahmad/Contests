#include <iostream>
using namespace std;

void ans() {
	int n,x;
	cin>>n >>x;
	int y=n-x;
	cout<< min(x,y) <<endl;

	return;


}
int main() {
	int t;
	cin>>t;
	for(int i=1; i<=t; i++) {
		ans();
	}

	return 0;
}
