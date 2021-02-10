//Receba dois numeros, mostre o maior e, se forem iguais, mostre a mensagem 'Numeros iguais'

#include <stdio.h>

int main(){

	float numA,numB;

	printf("Numero A:");
	scanf("%f",&numA);

	printf("Numero B:");
	scanf("%f",&numB);

	if(numA>numB)
		printf("Maior: %.2f",numA);
	else if(numA<numB)
		printf("Maior: %.2f",numB);
	else
		printf("Numeros iguais");

	return 0;
}