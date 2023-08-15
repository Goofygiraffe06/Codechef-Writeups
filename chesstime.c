#include <stdio.h>

int main(void) {
	int t, x;
	
	scanf("%d", &t);
	while (t--) {
	    scanf("%d", &x);
	    printf("%d\n", (x*60) / 20);
	}
	return 0;
}


