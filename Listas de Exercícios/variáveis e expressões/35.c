//Faça um programa que receba os valores dos catetos A e B e retorne a hipotenusa. H = RAIZ DE (A²+B²)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

	float a,b;

	printf("Cateto A: ");
	scanf("%f",&a);
	printf("Cateto B: ");
	scanf("%f",&b);


	//sqrt e pow são funções da biblioteca math.h para raiz e quadrado respectivamente.
	printf("Hipotenusa: %.2f",sqrt((pow(a,2)+pow(b,2))));

}