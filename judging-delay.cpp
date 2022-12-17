#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int s[n],j[n],cnt=0;
	    for(int i=0;i<n;i++){
	        cin >> s[i] >> j[i];
	        if(j[i]-s[i]>5) cnt++;
	    }
	    cout << cnt << endl;
	}
	return 0;
}
