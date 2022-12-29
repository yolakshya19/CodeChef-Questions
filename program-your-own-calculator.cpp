#include <iostream>
#include<iomanip>
using namespace std;

int main() {
	// your code goes here
	double a,b;
	cin >> a;
	cin >> b;
	char c;
	cin >> c;
	if(c=='+') cout << a+b << endl;
	else if(c=='-') cout << a-b << endl;
	else if(c=='*') cout << fixed << setprecision(8) << a*b << endl;
	else if(c=='/'){
    	cout << fixed << setprecision(8) << endl;
    	cout << a/b << endl;
	}
	return 0;
}
