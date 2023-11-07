#include <iostream>
using namespace std;

int main() {
	int cases, tyres;
	
	std::cin >> cases;
	while (cases--) {
	    std::cin >> tyres;
	    
	    if (tyres % 4 == 0) {
	        std::cout << "NO" << endl;
	    }
	    else if (tyres % 2 == 0) {
	        std::cout << "YES" << endl;
	    }
	}
	return 0;
}

