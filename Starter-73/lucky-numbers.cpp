#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x;
	    cin >> x;
	    int digit,flag=0;
	    while(x!=0){
	        digit=x%10;
	        if(digit==7){
	            flag=1;
	            break;
	        }
	        x=x/10;
	    }
	    if(flag==1) cout << "Yes" << endl;
	    else cout << "No" << endl;
	}
	return 0;
}
