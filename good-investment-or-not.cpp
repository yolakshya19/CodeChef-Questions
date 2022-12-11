#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    (x>=2*y)? cout << "Yes" << endl : cout << "No" << endl;
	}
	return 0;
}
