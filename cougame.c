#include <stdio.h>

int main(void) {
	int t, b, g;
	
	scanf("%d", &t);
	while (t--) {
	    scanf("%d %d", &g, &b);
	    printf("%d\n", b - g);
	}
	return 0;
}


