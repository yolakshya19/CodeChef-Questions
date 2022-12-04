#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y,a,b,k;
	    cin >> x >> y >> a >> b >> k;
	    int petrol=x+(a*k);
	    int diesel=y+(b*k);
	    if(petrol<diesel){
	        cout << "PETROL" << endl;
	    }
	    else if(diesel<petrol){
	        cout << "DIESEL" << endl;
	    }
	    else{
	        cout << "SAME PRICE" << endl;
	    }
	}
	return 0;
}
