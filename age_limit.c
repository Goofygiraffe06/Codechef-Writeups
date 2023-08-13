#include <stdio.h>

int main(void) {
    int t, x, y, a;
    
    // Reading number of test cases
    scanf("%d", &t);
    
    while(t--) { // Running loop t times
        scanf("%d %d %d", &x, &y, &a); // Reading x, y and a
        
        // Check eligibility
        if (a >= x && a < y) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
	
	return 0;
}


