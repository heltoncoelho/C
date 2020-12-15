//Ler um angulo em radianos e converter em graus.  G = R * 180/PI

#include <stdio.h>

#define PI 3.14

int main(){

	float angulo_R = 0;

	printf("Angulo em radianos: ");
	scanf("%f",&angulo_R);

	printf("Em graus: %f",angulo_R*180/PI);



	return 0;
}