#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if(n%2==0){
	        cout<<"1";
	        for(int i=0;i<n - 2; i++){
	            cout<<"0";
	        }
	        cout<<"1"<<endl;
	    }
	    else {
	        cout<<"0";
	        for(int i=0;i<n - 2;i++){
	            cout<<"1";
	        }
	        cout<<"0"<<endl;
	    }
	}
	return 0;
}
