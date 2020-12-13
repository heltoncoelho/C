//Leia uma temperatura em Kelvin e apresente-a convertida em Celsius. C = K - 273.15

#include <stdio.h>

int main(){


	float temperatura = 0;

	printf("Temperatura em Kelvin: ");
	scanf("%f",&temperatura);

	printf("Em Celsius: %.2f",temperatura - 273.15);


	return 0;
}