#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    string hidden;
	    cin >> hidden;
	    string guess;
	    cin >> guess;
	    for(int i=0;i<5;i++){
	        if(hidden[i]==guess[i]){
	            cout << 'G';
	        }
	        else{
	            cout << 'B';
	        }
	    }
	    cout << endl;
	}
	return 0;
}
