#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int a[n],b[n];
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	    }
	    for(int i=0;i<n;i++){
	        cin >> b[i];
	    }
	    int c[n],max=0;
	    for(int i=0;i<n;i++){
	        c[i]=a[i]+b[i];
	    }
	    for(int i=0;i<n;i++){
	        if(a[i]>a[max]){
	            max=i;
	        }
	        if(a[i]==a[max]){
	            if(c[i]>c[max]){
	                max=i;
	            }
	        }
	    }
	    cout << max+1 << endl;
	}
	return 0;
}
