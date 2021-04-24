/*Leia um inteiro positivo N e imprima todos os números até N em ordem decrescente.*/

#include <stdio.h>

int main(){

	int inteiroN = 0;
	int indice = 0;

	while(inteiroN<=0){
		printf("Digite um numero inteiro: ");
		scanf("%d",&inteiroN);		
	}

	indice = inteiroN;
	while(indice != 0){
		printf("%d ",indice);
		indice--;
	}

	return 0;
}