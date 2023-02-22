#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,x;
	    cin >> n >> x;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	    }
	    sort(a,a+n);
	    int index=n-x;
	    cout << a[index]-1<< endl;
	}
	return 0;
}
