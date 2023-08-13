#include <stdio.h>

int main(void) {
	int t, x, y;
	
	scanf("%d", &t);
	while (t--) {
	    scanf("%d %d", &x, &y);
	    (x >= y) ? printf("%d\n", x - y): printf("%d\n", 0);
	}
	return 0;
}


