#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int xa,xb,xc;
	    cin >> xa >> xb >> xc;
	    if(xa>50) cout << "A" << endl;
	    else if(xb>50) cout << "B" << endl;
	    else if(xc>50) cout << "C" << endl;
	    else cout << "NOTA" << endl;
	}
	return 0;
}
