#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    long int n,k;
	    cin >> n >> k;
	    long int a[n];
	    int remaining=0,flag=0;
	    for(int j=0;j<n;j++){
	        cin >> a[j];
	    }
	    
	    for(int i=0;i<n;i++){
	        remaining+=a[i]-k;
	        if(remaining<0){
	            cout << "NO " << i+1 << endl;
	            flag=1;
	            break;
	        }
	    }
	    
	    if(flag==0) cout << "YES" << endl;
	}
	return 0;
}
