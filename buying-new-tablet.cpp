#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,b;
	    cin >> n >> b;
	    int wi[n],hi[n],pi[n],flag=0,result,final=0;
	    for(int i=0;i<n;i++){
	        cin >> wi[i] >> hi[i] >> pi[i];
	        if(pi[i]<=b){
	            flag=1;
	            result=wi[i]*hi[i];
	            final=max(final,result);
	        }
	    }
	    if(flag==0) cout << "no tablet" << endl;
	    else cout << final << endl;
	}
	return 0;
}
