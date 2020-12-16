//Leia um cumprimento em metros e converta-o em jardas. J = M/0.91

#include <stdio.h>

int main(){

	float cumprimento = 0;

	printf("Cumprimento em  metros: ");
	scanf("%f",&cumprimento);

	printf("Cumprimento em jardas: %.2f",cumprimento/0.91);



	return 0;
}