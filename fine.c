#include <stdio.h>

int main(void) {
	int t, x;
	
	scanf("%d", &t);
	while (t--) {
	    scanf("%d", &x);
	    if (x <= 70) {
	        printf("%d\n", 0);
	    }
	    else if (x > 70 && x <= 100) {
	        printf("%d\n", 500);
	    }
	    else {
	        printf("%d\n", 2000);
	    }
	}
	return 0;
}


