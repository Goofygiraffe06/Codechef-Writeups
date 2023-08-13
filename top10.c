#include <stdio.h>

int main(void) {
	int t, x;
	
	scanf("%d", &t);
	while (t--) {
	    scanf("%d", &x);
	    (x <= 10) ? printf("YES\n"): printf("NO\n");
	}
	return 0;
}


