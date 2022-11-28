#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int a[n],max=0;
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	        if(max<a[i]){
	            max=a[i];
	        }
	    }
	    cout << max << endl;
	}
	return 0;
}
