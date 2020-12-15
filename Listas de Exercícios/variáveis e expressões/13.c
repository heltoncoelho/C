//Converter quilometros em milhas. M = K / 1.61

#include <stdio.h>

int main(){

	float quilometros = 0;

	printf("Distancia em quilometros: ");
	scanf("%f",&quilometros);

	printf("Distancia em milhas: %.2f",quilometros/1.61);




	return 0;
}