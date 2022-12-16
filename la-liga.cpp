#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    string team;
	    int scorebarca,scorerm,scoremala,scoreeibar;
	    for(int i=0;i<4;i++){
	        cin >> team;
	        if(team=="Barcelona"){
	            cin >> scorebarca;
	        }
	        if(team=="RealMadrid"){
	            cin >> scorerm;
	        }
	        if(team=="Malaga"){
	            cin >> scoremala;
	        }
	        if(team=="Eibar"){
	            cin >> scoreeibar;
	        }
	    }
	    if(scorebarca>scoreeibar && scorerm<scoremala){
	        cout << "Barcelona" << endl;
	    }
	    else{
	        cout << "RealMadrid" << endl;
	    }
	}
	return 0;
}
