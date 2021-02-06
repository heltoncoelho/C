//leia um numero real. Se for positivo imprima a raiz quadrada, se for negativo imprima o quadrado do numero.

#include <stdio.h>
#include <math.h>

int main(){

	float numero;

	printf("Digite um numero real: ");
	scanf("%f",&numero);

	if(numero>=0)
		printf("Raiz: %.2f",sqrt(numero));
	else
		printf("Quadrado: %.2f",pow(numero,2));


	return 0;
}