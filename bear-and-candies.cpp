#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,i=1;
	    cin >> a >> b;
	    while(a>=0 && b>=0){
	        if(i%2==0) b-=i;
	        else a-=i;
	        
	        i++;
	    }
	    if(a<0) cout << "Bob" << endl;
	    else if(b<0) cout << "Limak" << endl;
	}
	return 0;
}
