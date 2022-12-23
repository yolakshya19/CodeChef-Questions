#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int dragon[3],sloth[3],dragon_sum=0,sloth_sum=0;
	    for(int i=0;i<3;i++){
	        cin >> dragon[i];
	        dragon_sum+=dragon[i];
	    }
	    for(int i=0;i<3;i++){
	        cin >> sloth[i];
	        sloth_sum+=sloth[i];
	    }
	    if(dragon_sum>sloth_sum) cout << "DRAGON" << endl;
	    else if(dragon_sum<sloth_sum) cout << "SLOTH" << endl;
	    else{
	        if(dragon[0]>sloth[0]) cout << "DRAGON" << endl;
	        else if(dragon[0]<sloth[0]) cout << "SLOTH" << endl;
	        else{
	            if(dragon[1]>sloth[1]) cout << "DRAGON" << endl;
	            else if(dragon[1]<sloth[1]) cout << "SLOTH" << endl;
	            else{
	                if(dragon[1]>sloth[1]) cout << "DRAGON" << endl;
	                else if(dragon[1]<sloth[1]) cout << "SLOTH" << endl;
	                else cout << "TIE" << endl;
	            }
	        }
	    }
	}
	return 0;
}
