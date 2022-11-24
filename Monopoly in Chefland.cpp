#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,r1,r2,r3;
	cin >> t;
	while(t--){
	    cin >> r1 >> r2 >> r3;
	    if(r1>r2+r3 || r2>r1+r3 || r3>r2+r1){
	        cout << "Yes" << endl;
	    }
	    else{
	        cout << "NO" << endl;
	    }
	}
	return 0;
}
