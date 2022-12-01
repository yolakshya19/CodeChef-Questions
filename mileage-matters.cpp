#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,x,y,a,b;
	    cin >> n >> x >> y >> a >> b;
	    float petrol=(n*1.0)/a;
	    float diesel=(n*1.0)/b;
	    if(petrol*x > diesel*y){
	        cout << "diesel" << endl;
	    }
	    else if(petrol*x < diesel*y){
	        cout << "petrol" << endl;
	    }
	    else{
	        cout << "any" << endl;
	    }
	}
	return 0;
}
