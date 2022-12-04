#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,m,k,cnt=0;
	cin >> n >> m >> k;
	for(int i=0;i<n;i++)
	{
	    int lecture_time[k],question,total=0;
	    for(int j=0;j<k;j++){
	        cin >> lecture_time[j];
	        total+=lecture_time[j];
	    }
	    cin >> question;
	    if(total>=m && question<=10){
	        cnt++;
	    }
	}
	cout << cnt << endl;
	return 0;
}
