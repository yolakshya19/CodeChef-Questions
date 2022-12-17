#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,suma=0,sumb=0;
	    cin >> n;
	    int a[n],b[n];
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	    }
	    for(int i=0;i<n;i++){
	        cin >> b[i];
	    }
	    sort(a,a+n);
	    sort(b,b+n);
	    for(int i=0;i<n-1;i++){
	        suma+=a[i];
	        sumb+=b[i];
	    }
	    if(suma<sumb) cout << "Alice" << endl;
	    else if(suma==sumb) cout << "Draw" << endl;
	    else cout << "Bob" << endl;
	}
	return 0;
}
