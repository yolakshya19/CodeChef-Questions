#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int d;
	    cin >> d;
	    string n;
	    cin >> n;
	    int flag=0;
	    for(int i=0;i<d;i++){
	        if(n[i]=='5' || n[i]=='0'){
	            flag=1;
	        }
	    }
	    (flag==1)? cout << "Yes" << endl : cout << "No" << endl;
	}
	return 0;
}
