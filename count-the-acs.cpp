#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int p;
	    cin >> p;
	    int problems=(p/100)+(p%100);
	    if(problems<=10){
	        cout << problems << endl;
	    }
	    else{
	        cout << -1 << endl;
	    }
	}
	return 0;
}
