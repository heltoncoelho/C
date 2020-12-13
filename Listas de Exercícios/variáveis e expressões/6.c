//Leia uma temperatura em Celsius e apresente-a convertida em Fahrenheit. F = C*(9.0/5.0)+32.0

#include <stdio.h>

int main(){

	float temperatura = 0;

	printf("Temperatura a ser convertida (em Celsius): ");
	scanf("%f",&temperatura);

	printf("Em Fahrenheit: %.2f",temperatura*(9.0/5.0)+32.0);




	return 0;
}