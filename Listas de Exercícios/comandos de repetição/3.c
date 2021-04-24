/*Faça um algoritmo usando while que mostre uma contagem regressiva de 10 a 0. Mostrar a mensagem "fim" ao término.*/

#include <stdio.h>

int main(){

	int indice = 10;

	while(indice != 0){
		printf("%d ",indice);
		indice--;
	}

	printf("FIM!");


	return 0;
}