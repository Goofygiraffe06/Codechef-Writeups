#include <stdio.h>

int main(void) {
	int t, n, x, y;
	
	scanf("%d", &t);
	while (t--) {
	    scanf("%d %d %d", &n, &x, &y);
	    (x * y >= n) ? printf("YES\n"): printf("NO\n");
	}
	return 0;
}


