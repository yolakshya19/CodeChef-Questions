#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,k,x,y;
	    cin >> n >> k >> x >> y;
	    int price=k*x;
	    int remaining=n-k;
	    if(x>=y){
	        price=price+(y*remaining);
	    }
	    else{
	        price=price+(x*remaining);
	    }
	    cout << price << endl;
	}
	return 0;
}
