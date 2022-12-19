#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    string s;
	    cin >> s;
	    int a=0,b=0;
	    for(int i=0;i<s.length();i++){
	        if(s[i]=='a') a++;
	        else b++;
	    }
	    if(b<a) cout << b << endl;
	    else cout << a << endl;
	}
	return 0;
}
