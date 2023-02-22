#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >>y;
	    if(y<=x) cout << y << endl;
	    else if(y>x) cout << x+(y-x)*2 << endl;
	}
	return 0;
}
