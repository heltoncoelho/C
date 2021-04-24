/*Peça ao usuário para digitar 10 valores em sequência e some-os. Imprima na tela o resultado*/

#include <stdio.h>

int main(){

	int indice, valor;
	int soma = 0;

	for(indice=1;indice<=10;indice++){
		printf("Valor %d: ",indice);
		scanf("%d",&valor);
		soma += valor;
	}

	printf("\nSoma dos valores digitados: %d",soma);



	return 0;
}