#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int score[11];
	    int teama=0,teamb=0;
	    for(int i=1;i<=10;i++){
	        cin >> score[i];
	        if(i%2==0){
	            teamb+=score[i];
	        }
	        else{
	            teama+=score[i];
	        }
	    }
	    if(teama>teamb){
	        cout << 1 << endl;
	    }
	    else if(teama<teamb){
	        cout << 2 << endl;
	    }
	    else{
	        cout << 0 << endl;
	    }
	}
	return 0;
}
