#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int s,x,y,z;
	    cin >> s >> x >> y >> z;
	    int remain=s-(x+y);
	    if(remain>=z){
	        cout << 0 << endl;
	    }
	    else if(s-x>=z || s-y>=z){  
	        cout << 1 << endl;
	    }
	    else{
	        cout << 2 << endl;
	    }
	}
	return 0;
}
