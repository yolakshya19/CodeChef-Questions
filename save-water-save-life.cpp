#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int h,x,y,c;
	    cin >> h >> x >> y >> c;
	    int water = (x+(y/2))*h;
	    (water<=c)? cout << "YES" << endl : cout << "NO" << endl;
	}
	return 0;
}
