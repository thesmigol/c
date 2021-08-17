#include<stdio.h>

int main() {
    int ENTRADA,i,TALVEZEUSEJAPRIMO,ii,DEPOISEUTROCO;
		scanf("%i", &ENTRADA);
    			for (i=0; i < ENTRADA; i++){
        ii=1;
        scanf("%i",&TALVEZEUSEJAPRIMO);
    			for (DEPOISEUTROCO=2;DEPOISEUTROCO<=(int)sqrt(TALVEZEUSEJAPRIMO);DEPOISEUTROCO++){
    		if (TALVEZEUSEJAPRIMO%DEPOISEUTROCO == 0) ii++;
        }
    		if (ii == 1 && TALVEZEUSEJAPRIMO != 1) {
        printf("%i eh primo\n",TALVEZEUSEJAPRIMO);
        }
   			else {
        printf("%i nao eh primo\n",TALVEZEUSEJAPRIMO);
        }
    }
    return 0;
}	