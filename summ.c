#include <stdio.h>

int main(void) {
	int t, a, b, c;
	
	scanf("%d", &t);
	while (t--) {
	    scanf("%d %d %d", &a, &b, &c);
	    ((a+b) == c) ? printf("YES\n"): printf("No\n");
	}
	return 0;
}


