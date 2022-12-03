#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int amin,bmin,cmin,tmin,a,b,c;
	    cin >> amin >> bmin >> cmin >> tmin >> a >> b >> c;
	    if(a>=amin && b>=bmin && c>=cmin && a+b+c>=tmin){
	        cout << "Yes" << endl;
	    }
	    else{
	        cout << "No" << endl;
	    }
	}
	return 0;
}
