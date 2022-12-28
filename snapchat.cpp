#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int a[n],b[n];
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	    }
	    for(int i=0;i<n;i++){
	        cin >> b[i];
	    }
	    
	    int streak=0,temp=0;
	    for(int i=0;i<n;i++){
	        if(a[i]!=0 && b[i]!=0){
	            temp++;
	        }
	        else{
	            temp=0;
	        }
	        streak=max(streak,temp);
	    }
	    cout << streak << endl;
	}
	return 0;
}
