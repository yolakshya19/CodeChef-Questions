#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y,p,q;
	    cin >> x >> y >> p >> q;
	    int chef=x+(p*10);
	    int chefina=y+(q*10);
	    (chef<chefina)? cout << "Chef" << endl : (chef>chefina)? cout << "Chefina" << endl : cout << "Draw" << endl;
	}
	return 0;
}
