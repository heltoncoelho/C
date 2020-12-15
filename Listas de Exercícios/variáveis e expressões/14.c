//Ler angulo em graus e converter para radianos. R = G * PI/180

#include <stdio.h>

#define PI 3.14

int main(){

	float graus = 0;

	printf("Angulo em graus: ");
	scanf("%f",&graus);

	printf("Em radianos: %f",graus*PI/180);



	return 0;
}