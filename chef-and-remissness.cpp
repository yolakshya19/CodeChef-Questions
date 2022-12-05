#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b;
	    cin >> a >> b;
	    int min=max(a,b);
	    int max=a+b;
	    cout << min << " " << max << endl;
	}
	return 0;
}
