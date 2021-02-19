//Usando switch leia um inteiro de 1 a 7 e imprima o dia da semana correspondente ao numero. Domingo é o dia 1.

#include <stdio.h>

int main(){

	int opcao;

	printf("Digite um numero de 1 a 7:");
	scanf("%d",&opcao);

	switch(opcao){
		case 1: printf("Domingo");break;
		case 2: printf("Segunda");break;
		case 3: printf("Terca");break;
		case 4: printf("Quarta");break;
		case 5: printf("Quinta");break;
		case 6: printf("Sexta");break;
		case 7: printf("Sabado");break;
		default: printf("Erro");
	};

	return 0;
}