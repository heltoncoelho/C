//Ler três valores e apresentar a soma dos quadrados dos três.

#include <stdio.h>

int main(){

	int valor_1, valor_2, valor_3;

	printf("Digite tres valores separados por espaco: ");
	scanf("%d %d %d",&valor_1,&valor_2,&valor_3);

	printf("QUADRADOS:\nValor 1: %d\tValor 2: %d\tValor 3: %d",valor_1*valor_1,valor_2*valor_2,valor_3*valor_3);
	printf("\nSoma dos quadrados: %d",(valor_1*valor_1)+(valor_2*valor_2)+(valor_3*valor_3));



	return 0;
}