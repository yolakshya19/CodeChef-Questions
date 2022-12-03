#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int r;
	    cin >> r;
	    if(r>=2000){
	        cout << 1 << endl;
	    }
	    else if(r<2000 && r>=1600){
	        cout << 2 << endl;
	    }
	    else if(r<1600){
	        cout << 3 << endl;
	    }
	}
	return 0;
}
