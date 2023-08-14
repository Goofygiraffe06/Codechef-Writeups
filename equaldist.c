#include <stdio.h>

int main(void) {
	int t, a, b;
	
	scanf("%d", &t);
	while (t--) {
	    scanf("%d %d", &a, &b);
	    (((a+b) % 2) == 0) ? printf("YES\n"): printf("NO\n");
	}
	return 0;
}


