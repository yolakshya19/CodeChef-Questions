#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int temp=n;
	    int reverse=0;
	    while(temp>0){
	        int digit=temp%10;
	        reverse=reverse*10+digit;
	        temp/=10;
	    }
	    (n==reverse)?cout << "wins" << endl:cout << "loses" << endl;
	}
	return 0;
}
