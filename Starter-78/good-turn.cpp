#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    if(x+y>6) cout << "YES" << endl;
	    else cout << "NO"<< endl;
	}
	return 0;
}
