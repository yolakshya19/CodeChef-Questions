#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,c=0;
	    cin >> x;
	    if(x%10!=0 && x%5!=0){
	        cout << -1 << endl;
	    }
	    else{
	        while(x>=10){
	            x=x-10;
	            c++;
	        }
	        while(x>=5){
	            x=x-5;
	            c++;
	        }
	        cout << c << endl;
	    }
	}
	return 0;
}
