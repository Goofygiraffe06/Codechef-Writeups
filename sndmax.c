#include <stdio.h>

int main(void) {
	int t, n1, n2, n3;
	
	scanf("%d", &t);
	while (t--) {
	    scanf("%d %d %d", &n1, &n2, &n3);
        if ((n1 > n2 && n1 < n3) || (n1 < n2 && n1 > n3)) {
            printf("%d\n", n1);
        }
        else if ((n2 > n1 && n2 < n3) || (n2 < n1 && n2 > n3)) {
            printf("%d\n", n2);
        }
        else {
            printf("%d\n", n3);
        }
	}
	return 0;
}


