
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int i,cnt=0;
	    cin >> i;
	    while(i>0){
	        int dig=i%10;
	        if(dig==4){
	            cnt++;
	        }
	        i/=10;
	    }
	    cout << cnt << endl;
	}
	return 0;
}




