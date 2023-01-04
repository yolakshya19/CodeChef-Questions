#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,c,i;
	    cin >> a >> b >> c;
	    for(i=2;i<100;i++){
	        if(a%i!=0 && b%i!=0 && c%i!=0){
	            cout << i << endl;
	            break;
	        }
	    }
	}
	return 0;
}
