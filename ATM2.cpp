#include <iostream>
using namespace std;

int main() {
	int t, n, k;
	
	cin >> t;
	while (t--) {
	    cin >> n >> k;
	    int A[n];
	    for (int i = 0; i < n; i++) {
	        cin >> A[i];
	    }
	    
	    for (int i = 0; i < n; i++) {
	        if (A[i] <= k) {
	            k-=A[i];
	            cout << 1;
	        }
	        else {
	            cout << 0;
	        }
	    }
	    cout << "\n";
	}
	return 0;
}

