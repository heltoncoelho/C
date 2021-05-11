/*Faça um programa que some os numeros impares dentro de um intervalo definido pelo usuario. Caso o usuario digite um
intervalo errado (final maior que o inicio) exibir mensagem de erro e sair do programa.*/

#include <stdio.h>

int main(){

	int i, min, max, soma = 0;

	printf("Valor inicial do intervalo: ");
	scanf("%d",&min);

	printf("Valor final do intervalo: ");
	scanf("%d",&max);

	if(max<=min){
		printf("Erro.");
		return 0;
	}

	for(i=min;i<=max;i++){

		if(i%2 != 0){
			printf("%d ",i);
			soma+=i;
		}
	}

	printf("\nSoma dos valores impares dentro do intervalo: %d",soma);


	return 0;
	
}