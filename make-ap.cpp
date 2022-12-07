#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,c,flag=0;
	    cin >> a >> c;
	    if(a==c){
	        cout << a << endl;
	    }
	    else{
	        int b;
	        for(b=a;b<c;b++){
	            if(b-a==c-b){
	                flag=1;
	                break;
	            }
	        }
	        if(flag==1){
	            cout << b << endl;
	        }
	        else{
	            cout << -1 << endl;
	        }
	    }
	}
	return 0;
}
