//Leia um valor em centímetros e converta em polegadas. P = C / 2.54

#include <stdio.h>

int main(){

	float centimetros = 0;

	printf("Cumprimento em centimetros: ");
	scanf("%f",&centimetros);

	printf("Em polegadas: %.2f",centimetros/2.54);



	return 0;
}