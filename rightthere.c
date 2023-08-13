#include <stdio.h>

int main(void) {
	int t, n, x;
	
	scanf("%d", &t);
	while (t--) {
	    scanf("%d %d", &n, &x);
	    (n <= x) ? printf("Yes\n"): printf("NO\n");
	}
	return 0;
}


