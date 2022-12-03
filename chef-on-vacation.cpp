#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y,z;
	    cin >> x >> y >> z;
	    (x+y<=z)? cout << "Yes" << endl : cout << "No" << endl;
	}
	return 0;
}
