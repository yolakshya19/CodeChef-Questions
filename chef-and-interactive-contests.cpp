#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,r;
	cin >> n >> r;
	while(n--){
	    int R;
	    cin >> R;
	    (R>=r)? cout << "Good boi" << endl : cout << "Bad boi" << endl;
	}
	return 0;
}
