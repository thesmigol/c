#include <stdio.h>
 
int main() {
	int A, B, C, X;
	int EUSOUMAIOR, MENTIRAEUQSO;
	scanf("%d %d %d", &A, &B, &C);
	X = (A+B+abs(A-B))/2;
	EUSOUMAIOR = (X+C+abs(X-C))/2;
	printf("%d eh o maior\n", EUSOUMAIOR);
	return 0;
}