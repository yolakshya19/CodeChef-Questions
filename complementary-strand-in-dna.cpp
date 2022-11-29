#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    string strand;
	    cin >> strand;
	    for(int i=0;i<n;i++){
	        if(strand[i]=='A'){
	            cout << 'T';
	        }
	        else if(strand[i]=='T'){
	            cout << 'A';
	        }
	        else if(strand[i]=='C'){
	            cout << 'G';
	        }
	        else{
	            cout << 'C';
	        }
	    }
	    cout << endl;
	}
	return 0;
}
