#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,cnt=0;
	    cin >> n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	    }
	    for(int i=0;i<n-1;i++){
	        if(a[i]==a[i+1]){
	            cnt++;
	        }
	    }
	    cout << n-cnt << endl;
	}
	return 0;
}
