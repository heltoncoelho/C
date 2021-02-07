//Leia um número. Se for positivo mostre: o numero ao quadrado e a raiz quadrada.

#include <stdio.h>
#include <math.h>

int main(){

	float numero;

	printf("Digite um numero positivo: ");
	scanf("%f",&numero);

	if(numero>0)
		printf("Quadrado: %.2f Raiz: %.2f\n",pow(numero,2),sqrt(numero));
	else
		printf("Numero negativo");

	return 0;
