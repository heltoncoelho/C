//Leia uma temperatura em graus Fahrenheit e converta-a em Celsius. C = 5.0*(F-32.0)/ 9.0

#include <stdio.h>

int main(){


	float temperatura = 0;

	printf("Temperatura em Fahrenheit: ");
	scanf("%f",&temperatura);

	printf("Em Celsius: %.2f",5.0*(temperatura-32.0)/9.0);




	return 0;
}