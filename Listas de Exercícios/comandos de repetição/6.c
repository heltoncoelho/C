/*Leia 10 inteiros e imprima sua média.*/

#include<stdio.h>

int main(){

	int numero;
	int soma = 0;
	int contador = 1;

	do{
		printf("Valor # %d ",contador);
		scanf("%d",&numero);
		soma+=numero;
		contador++;
	}while(contador <= 10);

	printf("\nMedia: %d",soma/10);


	return 0;
}