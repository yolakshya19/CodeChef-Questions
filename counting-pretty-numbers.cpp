#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int l,r,cnt=0;
	    cin >> l >> r;
	    for (int i=l;i<=r;i++){
	        int digit = i%10;
	        if(digit==2 || digit==3 || digit==9){
	            cnt++;
	        }
	    }
	    cout << cnt << endl;
	}
	return 0;
}
