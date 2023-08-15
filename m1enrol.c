#include <stdio.h>

int main(void) {
	int t, x, y;
	
	scanf("%d", &t);
	while (t--) {
	    scanf("%d %d", &x, &y);
	    if (y > x) {
	        printf("%d\n", y - x);
	    }
	    else {
	        printf("%d\n", 0);
	    }
	}
	return 0;
}


