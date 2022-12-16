#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a[3],b[3],cnta1=0,cnta0=0,cntb1=0,cntb0=0;
	    for(int i=0;i<3;i++){
	        cin >> a[i];
	        (a[i]==1)? cnta1++ : cnta0++;
	    }
	    for(int i=0;i<3;i++){
	        cin >> b[i];
	        (b[i]==1)? cntb1++ : cntb0++;
	    }
	    (cnta1==cntb1 && cnta0==cntb0)? cout << "Pass" << endl : cout << "Fail" << endl;
	}
	return 0;
}
