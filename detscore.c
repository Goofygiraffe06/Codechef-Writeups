#include <stdio.h>

int main(void) {
	int t, x, n;
	
	scanf("%d", &t);
	while (t--) {
	    scanf("%d %d", &x, &n);
	    printf("%d", (x/10) * n);
	}
	return 0;
}


