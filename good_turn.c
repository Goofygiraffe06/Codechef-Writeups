#include <stdio.h>

int main(void) {
	int x = 0, y = 0, n = 0, i = 0;
	
	scanf("%d", n);
	for (i = 0; i <= n; i++) {
	    scanf("%d %d", x, y);
	    if ((x + y) > 6) {
	        printf("YES\n");
	    }
	    else {
	        printf("NO\n");
	    }
	}
	return 0;
}


