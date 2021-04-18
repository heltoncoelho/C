/*Leia um numero entre 100 e 999 e imprima saparadamente cada algarismo que o compoe.*/


#include <stdio.h>

int main(){

	int numero;
	int a, b, c;

	printf("Digite um numero entre 100 e 999: ");
	scanf("%d",&numero);
	
	c = numero%10;
	b = (numero%100)/10;
	a = numero/100;
	
	printf("\na: %d",a);
	printf("\nb: %d",b);
	printf("\nc: %d\n",c);
	


	return 0;
}