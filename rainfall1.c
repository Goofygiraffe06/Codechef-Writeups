#include <stdio.h>

int main(void) {
	int t, x;
	
	scanf("%d", &t);
	while (t--) {
	    scanf("%d", &x);
	    if (x < 3) {
	        printf("LIGHT\n");
	    }
	    else if (x >= 3 && x < 7) {
	        printf("MODERATE\n");
	    }
	    else if (x >= 7) {
	        printf("HEAVY\n");
	    }
	}
	return 0;
}


