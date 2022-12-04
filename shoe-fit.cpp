#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,c;
	    cin >> a >> b >> c;
	    if(a!=b || a!=c){
	        cout << 1 << endl;
	    }
	    else{
	        cout << 0 << endl;
	    }
	}
	return 0;
}
