//Leia um cumprimento em jardas e converta em metros. M = J * 0.91

#include <stdio.h>

int main(){

	float cumprimento = 0;

	printf("Cumprimento em jardas: ");
	scanf("%f",&cumprimento);

	printf("Cumprimento em metros: %.2f",cumprimento*0.91);



	return 0;
}