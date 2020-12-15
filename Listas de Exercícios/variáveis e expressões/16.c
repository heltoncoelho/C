//Leia um cumprimento em polegadas e converta em centímetros. C = P * 2.54


#include <stdio.h>

int main(){

	float polegadas = 0;

	printf("Cumprimento em polegadas: ");
	scanf("%f",&polegadas);

	printf("Em centimetros: %.2f",polegadas*2.54);





	return 0;
}