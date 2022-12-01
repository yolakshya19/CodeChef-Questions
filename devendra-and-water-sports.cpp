#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int z,y,a,b,c;
	    cin >> z >> y >> a >> b >> c;
	    int remain=z-y;
	    (remain>=a+b+c)?cout << "yes" << endl : cout << "no" << endl;
	}
	return 0;
}
