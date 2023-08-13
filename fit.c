#include <stdio.h>

int main(void) {
	int t, x;
	
	scanf("%d", &t);
	
	while(t--) {
	    scanf("%d", &x);
	    printf("%d\n", 10 * x); // 10 here because open trip in the morning and one in the evening 
	}
	return 0;
}


