//Receba um número inteiro e verifique se ele é par ou ímpar.

#include <stdio.h>

int main(){

	int num;

	printf("Digite um número inteiro: ");
	scanf("%d",&num);

	if(num%2==0)
		printf("Par!\n");
	else
		printf("Impar!\n");



	return 0;
}