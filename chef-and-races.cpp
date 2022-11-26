#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y,a,b;
	    cin >> x >> y >> a >> b;
	    if((x==a || x==b) && (y==a || y==b)){
	        cout << 0 << endl;
	    }
	    else if((x==a || x==b)&&(y!=a && y!=b)){
	        cout << 1 << endl;
	    }
	    else if((x!=a && x!=b)&&(y==a || y==b)){
	        cout << 1 << endl;
	    }
	    else if(x!=a && x!=b && y!=a && y!=b){
	        cout << 2 << endl;
	    }
	}
	return 0;
}
