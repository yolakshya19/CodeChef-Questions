#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    float a,b,x,y;
	    cin >> a >> b >> x >> y;
	    float chef=a/x;
	    float chefina=b/y;
	    if(chef<chefina){
	        cout << "CHEF" << endl;
	    }
	    else if(chef==chefina){
	        cout << "BOTH" << endl;
	    }
	    else{
	        cout << "CHEFINA" << endl;
	    }
	}
	return 0;
}
