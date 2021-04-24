/*Leia um inteiro positivo impar N e imprima todos os ímpares de 1 até N em ordem crescente*/

#include <stdio.h>

int main(){

	int inteiro;
	int indice;


	do{
		printf("Digite um inteiro positivo impar: ");
		scanf("%d",&inteiro);
	}while(inteiro%2 == 0);


	for(indice=0;indice<=inteiro;indice++){		
		if(indice%2 != 0)
			printf("%d ",indice);
	}


	return 0;
}