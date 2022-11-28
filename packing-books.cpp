#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y,z;
	    cin >> x >> y >> z;
	    int box=ceil((y*1.0)/z);
	    cout << box*x << endl;
	}
	return 0;
}
