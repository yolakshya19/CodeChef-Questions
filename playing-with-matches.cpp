#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,sum=0;
	    cin >> a >> b;
	    int result=a+b;
	    while(result!=0){
	        int digit=result%10;
	        if(digit==0 || digit==6 || digit==9) sum+=6;
	        else if(digit==1) sum+=2;
	        else if(digit==2 || digit==3 || digit==5) sum+=5;
	        else if(digit==7) sum+=3;
	        else if(digit==8) sum+=7;
	        else if(digit==4) sum+=4;
	        result/=10;
	    }
	    cout << sum << endl;
	}
	return 0;
}
