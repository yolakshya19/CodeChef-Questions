#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int sa,sb,sc;
	    cin >> sa >> sb >> sc;
	    if(sa<sb){
	        if(sa<sc){
	            cout << "Draw" << endl;
	        }
	        else{
	            cout << "Alice" << endl;
	        }
	    }
	    else{
	        if(sb<sc){
	            cout << "Bob" << endl;
	        }
	        else{
	            cout << "Alice" << endl;
	        }
	    }
	}
	return 0;
}
