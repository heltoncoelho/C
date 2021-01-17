//Leia o valor do raio do círculo e calcule e imprima a area correspondente. A area é dada por PI*RAIO²

#include <stdio.h>
#define PI 3.14

int main(){

	float raio;

	printf("Raio do circulo: ");
	scanf("%f",&raio);

	printf("Area do circulo: %.2f",PI*raio*raio);




	return 0;
}

