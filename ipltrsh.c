#include <stdio.h>

int main(void) {
	int t, n, m;
	
	scanf("%d", &t);
	while(t--) {
	    scanf("%d %d", &n, &m);
	    (n > m) ? printf("%d\n", n-m): printf("%d\n", 0);
	}
	return 0;
}


