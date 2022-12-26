#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    long n;
	    cin >> n;
	    long m=2*n;
	    long a[m],cnt,flag=0;
	    for(int i=0;i<2*n;i++){
	        cin >> a[i];
	    }
	    for(int i=0;i<m;i++){
	        cnt=0;
	        for(int j=0;j<2*n;j++){
	            if(a[i]==a[j]) cnt++;
	        }
	        if(cnt>2){
	            flag=1;
	            break;
	        }
	    }
	    if(flag==1) cout << "No" <<endl;
	    else cout << "Yes" <<endl;
	}
	return 0;
}
