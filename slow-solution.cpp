#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int maxT,maxN,sumN;
	    long total=0;
	    cin >> maxT >> maxN >> sumN;
	    
	    int worst_test=ceil(sumN*1.0/maxN);
	    
	    if(worst_test>maxT) worst_test=maxT;
	    while(worst_test--){
	        if(maxN<=sumN){
	            total+=(maxN*maxN);
	            sumN=sumN-maxN;
	        }
	        else{
	            total+=(sumN*sumN);
	        }
	    }
	    cout << total << endl;
	}
	return 0;
}
