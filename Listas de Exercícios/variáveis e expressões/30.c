//Leia um valor em real e a cotação em dolar, depois imprima o valor correspondente em dolar.

#include <stdio.h>

int main(){


	float dolar, real;

	printf("Qual a cotacao do dolar no dia de hoje? ");
	scanf("%f",&dolar);

	printf("Qual o valor em reais a ser convertido? ");
	scanf("%f",&real);

	printf("Valor em dolar pela cotacao inserida: %.2f",dolar*real);






	return 0;
}