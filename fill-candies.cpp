#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int t,n,k,m;
	cin >> t;
	while(t--){
	    cin >> n >> k >> m;
	    int total=k*m;
	    int ans=ceil(n*1.00/total);
	    cout << ans << endl;
	}
	return 0;
}
