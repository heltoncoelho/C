//Converter milhas em quilometros. K = 1,61 * M

#include <stdio.h>

int main(){

	float milhas = 0;

	printf("Distancia em milhas: ");
	scanf("%f",&milhas);

	printf("Distancia em quilometros: %.2f",milhas*1.61);



	return 0;
}