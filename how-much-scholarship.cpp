#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int r;
	cin >> r;
	if(r>=1 && r<=50) cout << 100 << endl;
	else if(r>=51 && r<=100) cout << 50 << endl;
	else cout << 0 << endl;
	return 0;
}
