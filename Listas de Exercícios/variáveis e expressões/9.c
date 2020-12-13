//Ler uma temperatura em Celsius e converter em Kelvin. K = C + 273.15

#include <stdio.h>

int main(){

	float temperatura = 0;

	printf("Temperatura em Celsius: ");
	scanf("%f",&temperatura);

	printf("Em Kelvin: %.2f",temperatura+273.15);


	return 0;
}