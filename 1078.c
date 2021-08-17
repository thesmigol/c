#include <stdio.h>

int main() {
    
int i,ENTRADA;
    	scanf("%d",&ENTRADA);
    for (i=1; i<=10; i++){
        printf("%d x %d = %d\n",i,ENTRADA,ENTRADA*i);
    }
	return 0;
}