#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int n;
	    cin >> n;
	    string a;
	    cin >> a;
	    string b;
	    cin >> b;
	    int cnta1=0,cnta0=0,cntb1=0,cntb0=0;
	    for(int i=0;i<n;i++){
	        if(a[i]=='1') cnta1++;
	        else cnta0++;
	        
	        if(b[i]=='1') cntb1++;
	        else cntb0++;
	    }
	    if(cnta1==cntb1 && cnta0==cntb0) cout << "yes" << endl;
	    else cout << "no" << endl;
	}
	return 0;
}
