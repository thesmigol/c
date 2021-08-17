#include <stdio.h>

int main() {
    float NOTA1,NOTA2,NOTA3;
    scanf("%f %f %f", &NOTA1, &NOTA2, &NOTA3);
    printf("MEDIA = %.1f\n", (NOTA1*2+NOTA2*3+NOTA3*5)/(3+2+5));
    return 0;
 }