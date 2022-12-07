#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,x,c;
	    cin >> n >> x >> c;
	    int a[n],cnt=0,sum=0;
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	        if(x-a[i]>c){
	            a[i]=x;
	            cnt++;
	        }
	        sum+=a[i];
	    }
	    cout << sum-(c*cnt) << endl;
	}
	return 0;
}
