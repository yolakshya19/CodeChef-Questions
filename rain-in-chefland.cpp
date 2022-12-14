#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x;
	    cin >> x;
	    (x<3)? cout << "Light" << endl : (x>=3 && x<7)? cout << "Moderate" << endl : cout << "Heavy" << endl;
	}
	return 0;
}
