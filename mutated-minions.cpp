#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,k,cnt=0;
	    cin >> n >> k;
	    int dna[n];
	    for(int i=0;i<n;i++){
	        cin >> dna[i];
	        if((dna[i]+k)%7==0){
	            cnt++;
	        }
	    }
	    cout << cnt << endl;
	}
	return 0;
}
