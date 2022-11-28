#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    if(x%2==0){
	        if(y%2==0){
	            cout << "JANMANSH" << endl;
	        }
	        else{
	            cout << "JAY" << endl;
	        }
	    }
	    else{
	        if(y%2==0){
	            cout << "JAY" << endl;
	        }
	        else{
	            cout << "JANMANSH" << endl;
	        }
	    }
	}
	return 0;
}
