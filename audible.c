#include <stdio.h>

int main(void) {
	int t, x;
	
	scanf("%d", &t);
	while(t--) {
	    scanf("%d", &x);
	    (x >= 67 && x <= 45000) ? printf("YES\n"): printf("NO\n");
	}
	return 0;
}


