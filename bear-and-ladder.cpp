#include <iostream>
using namespace std;

int main() {
	int Q;
	cin>>Q;
	while(Q--){
	    int a,b;
	    cin>>a>>b;
	    if((b%2==0)&&(b==a + 1))
	    cout<<"YES"<<endl;
	    else if((a%2==0)&&(a==b + 1))
	    cout<<"YES"<<endl;
	    else if((b==a + 2)||(a==b+ 2))
	    cout<<"YES"<<endl;
	    else 
	    cout<<"NO"<<endl;
	}
	return 0;
}
