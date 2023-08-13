#include <stdio.h>

int main(void) {
	int t, x;
	
	scanf("%d", &t);
	while (t--) {
	    scanf("%d", &x);
	    (x > 100) ? printf("%d\n", x - 10): printf("%d\n", x);
	}
	return 0;
}


