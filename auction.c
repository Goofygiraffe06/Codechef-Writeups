#include <stdio.h>

int main(void) {
	int t, a, b, c;
	
	scanf("%d", &t);
	while (t--) {
	    scanf("%d %d %d", &a, &b, &c);
	    if (a > b) {
	        if (a > c) {
	            printf("ALICE\n");
	        }
	        else {
	            printf("CHARLIE\n");
	        }
	    }
	    else {
	        if (b > c) {
	            printf("BOB\n");
	        }
	        else {
	            printf("CHARLIE\n");
	        }
	    }
	}
	return 0;
}


