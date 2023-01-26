#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,c,d,cnt=0,flag=0;
	    cin >> a >> b >> c >> d;
	    for(int i=a;i<=b;i++){
	        cnt++;
	    }
	    for(int i=c;i<=d;i++){
	        for(int j=a;j<=b;j++){
	            if(i==j) flag++;
	        }
	        cnt++;
	    }
	    cout << cnt-flag << endl;
	}
	return 0;
}
