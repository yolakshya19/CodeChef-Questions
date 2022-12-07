#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    (x>y)? cout << "Loss" << endl : (x<y)? cout << "Profit" << endl : cout << "Neutral" << endl;
	}
	return 0;
}
