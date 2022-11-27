#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	 while(t--){
	    int n,a,b;
	    cin >> n >> a >> b;
	    int face[n];
	    int cnta=0,cntb=0;
	    float prob1,prob2;
	    for(int i=0;i<n;i++){
	        cin >> face[i];
	        if(a==face[i]){
	            cnta++;
	        }
	        if(b==face[i]){
	            cntb++;
	        }
	    }
	    prob1=(cnta*1.00)/(n*1.00);
	    prob2=(cntb*1.00)/(n*1.00);
	    float probability=prob1*prob2;
	    cout << probability << endl;
	}
	return 0;
}
