#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n,a,b;
	cin >> t;
	while(t--){
	    cin >> n >> a >> b;
	    int span=log2(n);
	    cout << span*a + (span-1)*b << endl;
	}
	return 0;
}
