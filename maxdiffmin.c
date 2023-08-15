#include <stdio.h>

int main(void) {
	int t, a, b, c;
	
	scanf("%d", &t);
	while (t--) {
	    scanf("%d %d %d", &a, &b, &c);
	    printf("%d\n", c - a);
	}
	return 0;
}


