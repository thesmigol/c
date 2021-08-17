#include <stdio.h>

int main() {
	int i, j, X[3], SEILAKKKKKKKKKK, Y[3];
	for(i=0; i<3; i++){
	scanf("%d", &X[i]);
	Y[i] =X[i];
	}
	for(i=0; i<3; i++){
	for(j=i+1; j<3; j++){
	if(X[i]>X[j]){
	SEILAKKKKKKKKKK = X[i];
	X[i]=X[j];
	X[j]= SEILAKKKKKKKKKK;
	}}}
	for(i=0; i<3; i++){
	printf("%d\n", X[i]); 
	}
	printf("\n");
	for(i=0; i<3; i++){
	printf("%d\n", Y[i]); 
	}
    return 0;
}