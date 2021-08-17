#include <stdio.h>

int main() {

int IMPARES,ENTRADA;
    	scanf("%d",&ENTRADA);
    if(ENTRADA%2==0)
        ENTRADA=ENTRADA-1;
    for(IMPARES=1;IMPARES<=ENTRADA;IMPARES+=2)
        printf("%d\n",IMPARES);
    return 0;
}