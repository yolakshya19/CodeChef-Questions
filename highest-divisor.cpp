#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,max;
	cin >> n;
	for(int i=1;i<=10;i++){
	    if(n%i==0){
	        max=i;
	    }
	}
	cout << max;
	return 0;
}
