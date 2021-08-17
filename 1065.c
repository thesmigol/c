#include <stdio.h>

int main() {

int i, PARES = 0, ENTRADA;
		for (i = 0; i < 5; i++){
	scanf("%d", &ENTRADA);
		if (ENTRADA % 2 == 0){
	PARES++;
  }
}
	printf("%d valores pares\n", PARES);
		return 0;
}