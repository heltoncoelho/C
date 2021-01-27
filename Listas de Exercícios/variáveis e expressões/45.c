//Faça um programa para converter uma letra maiúscula em minúscula. Use a tabela ASCII

#include <stdio.h>

int main(){

	char letra;
	int minuscula;

	printf("Digite uma letra maiuscula: ");
	scanf("%c",&letra);

	minuscula = letra + 32;

	printf("Letra digitado em minusculo: %c\n",minuscula);


	

	return 0;
}
