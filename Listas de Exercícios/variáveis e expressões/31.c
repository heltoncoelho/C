//Ler um inteiro e imprimir o antecessor e o sucessor

#include <stdio.h>

int main(){

	int numero;

	printf("Digite um numero inteiro: ");
	scanf("%d",&numero);

	printf("Numero: %d\tAntecessor: %d\tSucessor: %d",numero,numero-1,numero+1);



	return 0;
}