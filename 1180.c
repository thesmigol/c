#include <stdio.h>

int main(){
        int TAMANHO, LINHA, POSICAO, OMENOR;
          scanf("%d", &TAMANHO);
        int x[TAMANHO];
    for(LINHA = 0; LINHA < TAMANHO; LINHA++)
          scanf("%d", &x[LINHA]);
            OMENOR=x[0];
    for(LINHA = 1; LINHA < TAMANHO; LINHA++){
    if(OMENOR > x [LINHA]){
            OMENOR=x[LINHA];
            POSICAO=LINHA;
    }}
    printf("Menor valor: %d\n", OMENOR);
    printf("Posicao: %d\n", POSICAO);
    return 0;
}