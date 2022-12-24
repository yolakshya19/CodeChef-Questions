#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int b[n],sum=0;
	    for(int i=0;i<n;i++){
	        cin >> b[i];
	        sum+=b[i];
	    }
	    if(sum%2==0) cout << "yes" << endl;
	    else cout << "no" << endl;
	}
	return 0;
}
