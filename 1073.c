#include <stdio.h>

int main() {
 int ENTRADA, QUADRADO;
     scanf("%d", &ENTRADA);
     for ( QUADRADO = 1; QUADRADO <= ENTRADA; ++QUADRADO){
      if(QUADRADO%2 == 0){
       printf("%d^2 = %d\n", QUADRADO,(QUADRADO*QUADRADO));
      }}
    return 0;
}