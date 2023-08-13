#include <stdio.h>

int main(void) {
    int t, x, y;
    
    scanf("%d", &t);
    while(t--) {
        scanf("%d %d", &x, &y);
        (x > y) ? printf("A\n"): printf("B\n");
    }
	return 0;
}


