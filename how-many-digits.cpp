#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,cnt=0;
	cin >> n;
	while(n>0){
	    n/=10;
	    cnt++;
	}
	(cnt==1)?cout << 1 << endl:(cnt==2)?cout << 2 << endl:(cnt==3)? cout << 3 << endl :cout<<"More than 3 digits" << endl;
	return 0;
}
