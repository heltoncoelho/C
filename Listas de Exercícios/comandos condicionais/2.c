//Leia um número. Se for positivo calcule a raiz, se for negativo mostre a mensagem "número inválido".

#include <stdio.h>
#include <math.h>

int main(){

	float numero;

	printf("Digite um numero inteiro: ");
	scanf("%f",&numero);

	if(numero>=0)
		printf("Raiz: %.f",sqrt(numero));
	else
		printf("Numero invalido");


	return 0;
}