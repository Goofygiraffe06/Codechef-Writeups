#include <stdio.h>

int main(void) {
	
	int t, n, x;
	
	scanf("%d", &t);
	while(t--) {
	    scanf("%d %d", &n, &x);
	    printf("%d\n", n-x);
	}
	return 0;
}


