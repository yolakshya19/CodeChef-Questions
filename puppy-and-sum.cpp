#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int d,n,sum;
	    cin >> d >> n;
	    for(int i=0;i<d;i++)
	    {
	        sum=0;
	        for(int j=1;j<=n;j++)
	        {
	            sum+=j;
	        }
	        n=sum;
	    }
	    cout << sum << endl;
	}
	return 0;
}
