#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int D,d,a,b,c;
	    cin >> D >> d >> a >> b >> c;
	    (D*d>=42)? cout << c << endl : (D*d>=21 && D*d<42)? cout << b << endl : (D*d>=10 && D*d<21)? cout << a << endl : cout << 0 << endl;
	}
	return 0;
}
