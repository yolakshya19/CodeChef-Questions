#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,x;
	    cin >> n >> x;
	    int income=pow(2,x);
	    int spend;
	    for(int i=0;i<n;i++){
	        spend=(0.5*income);
	        income=income-spend;
	    }
	    cout << income << endl;
	}
	return 0;
}
