#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,k;
	    cin >> n >> k;
	    int p[n],sum=0;
	    for(int i=0;i<n;i++){
	        cin >> p[i];
	        if(p[i]>k){
	            sum=sum+(p[i]-k);
	        }
	    }
	    cout << sum << endl;
	}
	return 0;
}
