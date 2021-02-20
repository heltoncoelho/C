//Calcule a area do trapézio. Área = ((base maior + base menor)*altura) / 2. Bases maior e menor devem ser maiores que zero.

#include <stdio.h>

int main(){

	float baseMaior,baseMenor,altura;

	printf("Base maior: ");
	scanf("%f",&baseMaior);

	printf("Base menor: ");
	scanf("%f",&baseMenor);

	printf("Altura: ");
	scanf("%f",&altura);

	printf("Area: %.2f",((baseMenor+baseMaior)*altura) / 2);

	return 0;
}

