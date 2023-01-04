#include <iostream>
using namespace std;

int gcd(int n, int m){
    return m==0? n:gcd(m,n%m);
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,m;
	    cin >> n >> m;
	    cout << gcd(n,m) << endl;
	}
	return 0;
}
