#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    for(int i=0;i<n-1;i=i+2){
	        if(s[i]=='0' && s[i+1]=='0'){
	            cout << 'A';
	        }
	        else if(s[i]=='0' && s[i+1]=='1'){
	            cout << 'T';
	        }
	        else if(s[i]=='1' && s[i+1]=='0'){
	            cout << "C";
	        }
	        else if(s[i]=='1' && s[i+1]=='1'){
	            cout << "G";
	        }
	    }
	    cout << endl;
	}
	return 0;
}
