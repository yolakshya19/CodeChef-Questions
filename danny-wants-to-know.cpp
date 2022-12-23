#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	long n,q;
	cin >> n >> q;
	long a[n],b[n];
	for(int i=0;i<n;i++)
	{
	    cin >> a[i];
	}
	for(int i=0;i<n;i++)
	{
        cin >> b[i];
	}
	while(q--){
	    long l,r;
	    long result=0;
	    cin >> l >> r;
	    for(int i=l-1;i<r;i++)
	    {
	        result+=(a[i]*b[i]);
	    }
	    cout << result << endl;
    }
	return 0;
}
