#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,p,x,y;
	    cin >> n >> p >> x >> y;
	    int a[n],result=0;
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	    }
	    for(int i=0;i<p;i++){
	        if(a[i]==1){
	            result+=y;
	        }
	        else{
	            result+=x;
	        }
	    }
	    cout << result << endl;
	}
	return 0;
}
