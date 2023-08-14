#include <stdio.h>

int main(void) {
	int t, x, y;
	
	scanf("%d", &t);
	while (t--) {
	    scanf("%d %d", &x, &y);
	    if (x*2 == y*5) {
	        printf("EITHER\n");
	    }
	    else if (x*2 > y*5) {
	        printf("CHOCOLATE\n");
	    }
	    else if (x*2 < y*5) {
	        printf("CANDY\n");
	    }
	}
	return 0;
}


