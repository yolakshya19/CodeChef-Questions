#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b;
	    cin >> a >> b;
	    ((a+b)%2==0)? cout << "Bob" << endl : cout << "Alice" << endl;
	}
	return 0;
}
