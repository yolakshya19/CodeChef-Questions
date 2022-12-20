#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,a,b;
	    cin >> n >> a >> b;
	    int total = 2*(180+n);
	    int remaining = a+b;
	    cout << total-remaining << endl;
	}
	return 0;
}
