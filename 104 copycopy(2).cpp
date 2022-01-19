#include <iostream>
#include <map>

using namespace std;

int main() {
	
	int t, n;
	
	cin >> t;
	
	while ( t-- ) {
		
		cin >> n;
		
		map<int, int> mm;
		int ele, count = 0;
		
		for ( int i=0; i<n; i++ ) {
			cin >> ele;
			if ( mm[ele] == 0 ) {
				count++;
				mm[ele] = 1;
			}
		}
		
		cout << count << endl;
	}
	
	return 0;
}
