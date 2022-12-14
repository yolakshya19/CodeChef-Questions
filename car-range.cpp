#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int p,m,v;
	    cin >> p >> m >> v;
	    cout << (m-p+1)*v << endl;
	}
	return 0;
}
