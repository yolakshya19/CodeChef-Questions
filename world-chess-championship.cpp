#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,carlsen=0,chef=0,draw=0;
	    cin >> x;
	    string result;
	    cin >> result;
	    for(int i=0;i<14;i++){
	        if(result[i]=='C'){
	            carlsen++;
	        }
	        else if(result[i]=='D'){
	            draw++;
	        }
	        else if(result[i]=='N'){
	            chef++;
	        }
	    }
	    int carlsen_score=(carlsen*2)+draw;
	    int chef_score=(chef*2)+draw;
	    if(carlsen_score>chef_score){
	        cout << 60*x << endl;
	    }
	    else if(carlsen_score<chef_score){
	        cout << 40*x << endl;
	    }
	    else if(carlsen_score==chef_score){
	        cout << 55*x << endl;
	    }
	}
	return 0;
}
