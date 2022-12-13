#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x;
	    cin >> x;
	    if(x%10==0){
	        cout << 0 << endl;
	    }
	    else if(x%5==0){
	        cout << 1 << endl;
	    }
	    else{
	        cout << -1 << endl;
	    }
	}
	return 0;
}
