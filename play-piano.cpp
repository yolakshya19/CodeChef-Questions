#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    string s;
	    cin >> s;
	    int flag=0;
	    for(int i=0;i<s.length()-1;i=i+2){
	        if(s[i]==s[i+1]){
	            flag=1;
	            break;
	        }
	    }
	    if(flag==1) cout << "no" << endl;
	    else cout << "yes" << endl;
	}
	return 0;
}
