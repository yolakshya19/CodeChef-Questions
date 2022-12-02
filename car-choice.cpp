#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x1,x2,y1,y2;
	    cin >> x1 >> x2 >> y1 >> y2 ;
	    float petrol,diesel;
	    petrol=(y2*1.00)/x2;
	    diesel=(y1*1.00)/x1;
	    if(petrol>diesel){
	        cout << -1 << endl;
	    }
	    else if(petrol<diesel){
	        cout << 1 << endl;
	    }
	    else if(petrol==diesel){
	        cout << 0 << endl;	    }
	}
	return 0;
}
