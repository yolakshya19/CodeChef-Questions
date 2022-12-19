#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,k;
	    cin >> n >> k;
	    int h[n],cnt=0;
	    for(int i=0;i<n;i++){
	        cin >> h[i];
	        if(h[i]>k) cnt++;
	    }
	    cout << cnt << endl;
	}
	return 0;
}
