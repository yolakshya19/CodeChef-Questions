#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,c;
	    cin >> a >> b >> c;
	    int sum=a+b;
	    if(sum==c) cout << "YES" << endl;
	    else cout << "NO" << endl;
	}
	return 0;
}
