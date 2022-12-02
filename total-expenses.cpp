#include <iostream>
#include<iomanip>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    float q,p;
	    cin >> q >> p;
	    float result=1.00*q*p;
	    cout << fixed << setprecision(6);
	    if(q>1000){
	        cout <<  (result*0.9) << endl;
	    }
	    else{
	        cout << result << endl;
	    }
	}
	return 0;
}
