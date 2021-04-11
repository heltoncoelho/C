/*Leia 10 inteiros positivos ignorando os negativos e imprima a sua media.*/

#include <stdio.h>

int main(){

	int inteiro = 0;
	int soma = 0;
	int contador = 1;


	while(contador<=10){
		printf("Inteiro # %d: ",contador);
		scanf("%d",&inteiro);

		if(inteiro<0)
			continue;
		else{
			soma+=inteiro;
			contador++;
		};
	};

	printf("\nMedia: %d",soma/10);
	return 0;
}