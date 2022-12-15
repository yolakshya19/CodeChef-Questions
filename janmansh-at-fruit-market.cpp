#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,a,b,c;
	    cin >> x;
	    int price[3];
	    for(int i=0;i<3;i++){
	        cin >> price[i];
	    }
	    sort(price,price+3);
	    cout << (x-1)*price[0] + price[1] << endl;
	}
	return 0;
}
