#include <stdio.h>
 
int main() {
 int PRIMEIRO, SEGUNDO;
	scanf ("%d %d", &PRIMEIRO, &SEGUNDO);
	if (PRIMEIRO % SEGUNDO == 0 || SEGUNDO % PRIMEIRO == 0){
		printf("Sao Multiplos\n");
	}
	else{
		printf("Nao sao Multiplos\n");
	}
    return 0;
}