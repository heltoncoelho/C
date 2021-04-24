/*Leia um inteiro positivo par N e imprima todos os pares de 0 até N em ordem crescente*/

#include <stdio.h>

int main(){

	int inteiro;
	int indice;


	do{
		printf("Digite um inteiro par: ");
		scanf("%d",&inteiro);
	}while(inteiro%2 != 0);


	for(indice=0;indice<=inteiro;indice++){
		if(indice%2 == 0)
			printf("%d ",indice);
	}


	return 0;
}