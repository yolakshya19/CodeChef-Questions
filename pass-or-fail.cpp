#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,x,p;
	    cin >> n >> x >> p;
	    int pos=x*3;
	    int neg=(n-x)*-1;
	    int marks=pos+neg;
	    if(marks>=p){
	        cout << "PASS" << endl;
	    }
	    else{
	        cout << "FAIL" << endl;
	    }
	}
	return 0;
}
