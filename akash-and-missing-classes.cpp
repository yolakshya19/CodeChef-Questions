#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    if(n%7==6){
	        cout << n/7+1 << endl;
	    }
	    else{
	        cout << n/7 << endl;
	    }
	}
	return 0;
}
