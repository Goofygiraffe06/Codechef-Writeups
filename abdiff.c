#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a, b;
	
	scanf("%d %d", &a, &b);
    printf("%d\n", abs((a * b) - (a + b)));
	return 0;
}


