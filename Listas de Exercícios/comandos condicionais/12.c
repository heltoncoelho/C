//Ler um inteiro. Se for negativo escrever a mensagem "numero invalido", se for positivo calcular o logaritmo.

#include <stdio.h>
#include <math.h>

int main(){

	float numero;

	printf("Digite um numero inteiro: ");
	scanf("%f",&numero);

	if(numero>0)
		printf("Logaritmo: %.f",log10(numero));
	else
		printf("Numero invalido");

	return 0;
}