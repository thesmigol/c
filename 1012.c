#include <stdio.h>

int main(){
	double a, b, c, TRIGUANGULI, CIRCULO, TRAPEZIODESCENDENTE, BOLAQUADRADA, RETANGULO, PI;
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);

	TRIGUANGULI = (a * c)/2;
	PI = 3.14159;
	CIRCULO = (PI * pow(c,2));
	TRAPEZIODESCENDENTE = ((a+b)*c)/2;
	BOLAQUADRADA = pow(b,2);
	RETANGULO = a * b;

	printf("TRIANGULO: %.3lf\n", TRIGUANGULI);
	printf("CIRCULO: %.3lf\n", CIRCULO);
	printf("TRAPEZIO: %.3lf\n", TRAPEZIODESCENDENTE);
	printf("QUADRADO: %.3lf\n", BOLAQUADRADA);
	printf("RETANGULO: %.3lf\n", RETANGULO);
	return 0;
}
