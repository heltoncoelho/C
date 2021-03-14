/*Receba a altura e peso de uma pessoa e de acordo com a tabela (pdf) classifique a pessoa*/

#include <stdio.h>

int main(){

	float altura, peso;

	printf("Altura: ");
	scanf("%f",&altura);

	printf("Peso: ");
	scanf("%f",&peso);

	if(altura < 1.2){
		if(peso<=60)
			printf("A");
		else if(peso>60 && peso<=90)
			printf("D");
		else if(peso>90)
			printf("G");
	};

	if(altura>=1.2 && altura<=1.7){
		if(peso<=60)
			printf("B");
		else if(peso>60 && peso<=90)
			printf("E");
		else if(peso>90)
			printf("H");
	};

	if(altura>1.7){
		if(peso<=60)
			printf("C");
		else if(peso>60 && peso<=90)
			printf("F");
		else if(peso>90)
			printf("I");
	};

	return 0;
}