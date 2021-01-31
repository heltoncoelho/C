//Calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual

#include <stdio.h>

int main(){

	int idade, anoAtual;

	printf("Idade: ");
	scanf("%d",&idade);
	printf("Ano atual: ");
	scanf("%d",&anoAtual);

	printf("Ano de nascimento: %d",anoAtual-idade);

	return 0;
}