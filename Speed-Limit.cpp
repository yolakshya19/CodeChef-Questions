#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,x,b,y;
	    cin >> a >> x >> b >> y;
	    float alicespeed=(float)a/x;
	    float bobspeed=(float)b/y;
	    if(alicespeed>bobspeed){
	        cout << "ALICE" << endl;
	    }
	    else if(alicespeed==bobspeed){
	        cout << "EQUAL" << endl;
	    }
	    else{
	        cout << "BOB" << endl;
	    }
	}
	return 0;
}
