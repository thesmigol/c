#include <stdio.h>
 
int main() {
    int x[10], i, CONTAGEM=0;
	for (i = 0; i < 10; i++) {
		scanf("%d", &x[i]);
		if (x[i] > 0) {
			printf("X[%d] = %d\n", CONTAGEM++, x[i]);
		} else {
			printf("X[%d] = 1\n", CONTAGEM++);
		}
	}
    return 0;
}