#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    int buy=x-y;
	    cout << (1.1*x)-buy << endl;
	}
	return 0;
}
