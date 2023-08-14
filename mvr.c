#include <stdio.h>

int main(void) {
	int t, a, b, x, y;
	
    scanf("%d %d %d %d", &a, &b, &x, &y);
    if ((a * 2 + b) == (x * 2 + y)) {
	    printf("EQUAL\n");
	}
	else if ((a * 2 + b) > (x * 2 + y)) {
	    printf("MESSI\n");
	}
	else if ((a * 2 + b) < (x * 2 + y)) {
	    printf("RONALDO\n");
	}
	return 0;
}


