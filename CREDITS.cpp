#include <iostream>
using namespace std;

int main() {
	int t, x;
	
	cin >> t;
	while (t--) {
	    cin >> x;
	    if (x > 65) {
	        cout << "OVERLOAD" << endl;
	    }
	    else if (x < 35) {
	        cout << "UNDERLOAD" << endl;
	    }
	    else {
	        cout << "NORMAL" << endl;
	    }
	}
	return 0;
}

