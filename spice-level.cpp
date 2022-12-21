#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x;
	    cin >> x;
	    if(x<4) cout << "Mild" << endl;
	    else if(x>=4 && x<7) cout << "Medium" << endl;
	    else if(x>=7) cout << "Hot" << endl;
	}
	return 0;
}
