#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int a[n],cnt=0,cnt2=0;
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	        if(a[i]<0){
	            cnt++;
	        }
	        if(a[i]==0){
	            cnt2++;
	        }
	    }
	    if(cnt%2==0 || cnt2>0){
	        cout << 0 << endl;
	    }
	    else if(cnt%2!=0){
	        cout << 1 << endl;
	    }
	}
	return 0;
}
