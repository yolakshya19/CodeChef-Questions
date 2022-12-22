#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,cnt=0,flag=0;
	    cin >> n;
	    string s;
	    cin >> s;
	    for(int i=0;i<n;i++){
	        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u'){
	            cnt++;
	        }
	        else{
	            cnt=0;
	        }
	        if(cnt==4){
	            flag=1;
	            break;
	        }
	    }
	    if(flag==1) cout << "no" << endl;
	    else cout << "yes" << endl;
	}
	return 0;
}
