 #include <stdio.h>
 
   int main() {
    float NOTA1,NOTA2;
    scanf("%f %f", &NOTA1, &NOTA2);
    printf("MEDIA = %.5f\n", (NOTA1*3.5+NOTA2*7.5)/(3.5+7.5));
    return 0;
 }