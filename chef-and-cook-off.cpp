#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a[5],cnt=0;
	    for(int i=0;i<5;i++){
	        cin >> a[i];
	        if(a[i]==1){
	            cnt++;
	        }
	    }
	    if(cnt==0) cout << "Beginner" << endl;
	    else if(cnt==1) cout << "Junior Developer" << endl;
	    else if(cnt==2) cout << "Middle Developer" << endl;
	    else if(cnt==3) cout << "Senior Developer" << endl;
	    else if(cnt==4) cout << "Hacker" << endl;
	    else if(cnt==5) cout << "Jeff Dean" << endl;
	}
	return 0;
}
