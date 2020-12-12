//Leia um numero real e imprima o quadrado desse numero

#include <stdio.h>
#include <math.h>

int main(){

	float num = 0;

	printf("Digite um numero real: ");
	scanf("%f",&num);

	//a maneira mais simples de resolver
	printf("Quadrado: %.2f",num*num);

	//outra forma é usar a funcao pow() da biblioteca math.h
	printf("\nPow: %.2f",pow(num,2));


		//NOTA: gcc 4.c - o 4 -lm
}