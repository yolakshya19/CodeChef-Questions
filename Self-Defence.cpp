#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,a[100],cnt=0;
	    cin >> n;
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	        if(a[i]>=10 && a[i]<=60){
	            cnt++;
	        }
	    }
	    cout << cnt << endl;
	}
	return 0;
}
