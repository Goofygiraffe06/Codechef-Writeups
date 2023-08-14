#include <stdio.h>

int main(void) {
	int t, x, y, z;
	
	scanf("%d", &t);
	while (t--) {
	    scanf("%d %d %d", &x, &y, &z);
	    printf("%d\n", (x*4) + (y*2));
	}
	return 0;
}


