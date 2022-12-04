#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int dates[n],holidays=8;
	    for(int i=0;i<n;i++){
	        cin >> dates[i];
	        if(dates[i]%7==0 || dates[i]%7==6){
	            continue;
	        }
	        holidays++;
	    }
	    cout << holidays << endl;
	}
	return 0;
}
