#include <stdio.h>

int main(void) {
	int t, x, y;
	
	scanf("%d", &t);
	while (t--) {
	    scanf("%d %d", &x, &y);
	    (y > x) ? printf("YES\n"): printf("NO\n");
	}
	return 0;
}


