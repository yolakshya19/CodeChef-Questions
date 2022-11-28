#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int r,o,c;
	cin >> r >> o >> c;
	int overs=20-o;
	int balls=overs*6;
	int max_runs=balls*6;
	int max_score=c+max_runs;
	if(max_score>r){
	    cout << "YES" << endl;
	}
	else{
	    cout << "NO" << endl;
	}
	return 0;
}
