#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    int normal=x-y;
	    if(y==0){
	        cout << x << endl;
	    }
	    else if(normal==0){
	        cout << 2*y-1 << endl;
	    }
	    else if(normal>0){
	        cout << 2*y+normal << endl;
	    }
	}
	return 0;
}
