#include <stdio.h>

int main(void) {
	int t, k, x;
	
	scanf("%d", &t);
	while (t--) {
	    scanf("%d %d", &k, &x);
	    printf("%d\n", k*7 - x);
	}
	return 0;
}


