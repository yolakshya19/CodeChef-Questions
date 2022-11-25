#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    int f1=ceil(x/10.0);
	    int f2=ceil(y/10.0);
	    cout << abs(f1-f2) << endl;
	}
	return 0;
}
