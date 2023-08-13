#include <stdio.h>

int main(void) {
	int t, n;
	
	scanf("%d", &t);
	while (t--) {
	    scanf("%d", &n);
	    ((n % 2) == 0) ? printf("YES\n"): printf("NO\n");
	}
	return 0;
}


