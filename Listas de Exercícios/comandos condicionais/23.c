/*Determine se um ano lido é bissexto. Passos para determinar se um ano é bissexto:
1. Divisivel por 400 sem resto, é bissexto.
2. Divisivel por 4 sem resto mas nao por 100, é bissexto.*/


#include <stdio.h>

int main(){

	int ano;

	printf("Digite o ano para saber se eh bissexto: ");
	scanf("%d",&ano);

	if(ano%400 == 0)
		printf("Ano bissexto, divisivel por 400");
	else if (ano%4 == 0 && ano%100 !=0)
		printf("Ano bissexto, divisivel por 4");
	else
		printf("O ano NAO eh bissexto.");	
	return 0;
}