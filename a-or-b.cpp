#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    int atb,bta;
	    atb=(500-x*2)+(1000-(x+y)*4);
	    bta=(1000-y*4)+(500-(x+y)*2);
	    if(atb>=bta){
	        cout << atb << endl;
	    }
	    else {
	        cout << bta << endl;
	    }
	}
	return 0;
}
