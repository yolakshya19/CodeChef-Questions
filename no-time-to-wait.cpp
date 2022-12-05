#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,h,x;
	cin >> n >> h >> x;
	int time_zone[n],flag=0;
	for(int i=0;i<n;i++){
	    cin >> time_zone[i];
	    if(time_zone[i]+x >= h){
	        flag=1;
	        break;
	    }
	}
	if(flag==0){
	    cout << "NO" << endl;
	}
	else{
	    cout << "YES" << endl;
	}
	return 0;
}
