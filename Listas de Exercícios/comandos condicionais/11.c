//Leia um numero inteiro maior do que zero e devolva a soma de todos os seus algarismos. Exemplo: 251 seria 2+5+1 = 8

#include <stdio.h>

int main(){

	int numero, a, b, c;

	printf("Digite um numero inteiro: ");
	scanf("%d",&numero);

	if(numero>0){		
		a = numero/100;
		b = (numero%100) / 10;
		c = (numero%100) % 10;
		numero = a+b+c;

		printf("Soma dos algarismos do numero digitado: %d\n",numero);
	} else
		printf("Numero invalido");



	return 0;
}