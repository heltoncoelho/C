//Leia um número inteiro e inverta os três dígitos

#include <stdio.h>

int main(){

	int numero,a,b,c;

	printf("Digite um inteiro de tres digitos: ");
	scanf("%d",&numero);

	//ultimo digito
	c = numero%10;

	//digito do meio
	b = (numero/10)%10;

	//digito inicial
	a = numero/100;

	printf("Numero invertido: %d%d%d\n",c,b,a);


	return 0;
}