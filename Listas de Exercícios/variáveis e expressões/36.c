//Leia a altura e o raio de um cilindro circular e imprima o volume. Volume = PI*raio²*altura

#include <stdio.h>
#define PI 3.14

int main(void){

	float altura, raio;

	printf("Altura do cilindro: ");
	scanf("%f",&altura);

	printf("Raio do cilindro: ");
	scanf("%f",&raio);

	printf("Volume do cilindro: %.2f",PI*((raio*raio)*altura));




}