#include <stdio.h>
#include <stdlib.h>

int main(){

	//definição de variaveis
	int a = 6;
	char letra = 'c';

	if (a == 6)
		printf("\nA = 6\n");

	//verifica de é par ou impar
	if (a % 2 == 0)
		printf("Numero par\n");
	else
		printf("Numero impar\n");

	if (letra == 'c')
		printf("A letra eh C\n");



	return 0;
}