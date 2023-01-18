#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int zero=0,one=0,num;
	    for(int i=0;i<n;i++){
	        cin >> num;
	        if(num==1){
	            one++;
	        }
	        else{
	            zero++;
	        }
	    }
	    if((n-one)%2==0) cout << "YES" << endl;
	    else cout << "NO" << endl;
	}
	return 0;
}
