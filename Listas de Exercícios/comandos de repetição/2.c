/*Escrever de 1 até 100 na tela 3 vezes. Na primeira usar for, na segunda while, na terceira dowhile*/

#include <stdio.h>

int main(){

	int indice;

	printf("Usando FOR:\n");
	for(indice=1;indice<=100;indice++){		
		printf("%d ",indice);
	}

	printf("\nUsando WHILE:\n");
	indice = 1;
	while(indice != 101){
		printf("%d ",indice);
		indice++;
	}

	printf("\nUsando DO WHILE:\n");
	indice = 1;
	do{
		printf("%d ",indice);
		indice++;
	}while(indice != 101);


	return 0;
}