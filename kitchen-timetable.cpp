#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int a[n],b[n],subtract=0,cnt=0;
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	    }
	    for(int i=0;i<n;i++){
	        cin >> b[i];
	    }
	    for(int i=0;i<n;i++){
	        int cooking=a[i]-subtract;
	        if(cooking>=b[i]) cnt++;
	        subtract=a[i];
	    }
	    cout << cnt << endl;
	}
	return 0;
}
