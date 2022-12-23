#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,m;
	    cin >> n >> m;
	    if((n*m)%2==0) cout << "YES" << endl;
	    else cout << "NO" << endl;
	}
	return 0;
}
