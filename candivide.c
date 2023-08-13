#include <stdio.h>

int main(void) {
	int t, n;
	
	scanf("%d", &t);
	while (t--) {
	    scanf("%d", &n);
	    ((n % 3) == 0) ? printf("Yes\n"): printf("NO\n");
	}
	return 0;
}


