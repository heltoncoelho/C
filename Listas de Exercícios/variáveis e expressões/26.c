//Leia um valor em m2 e converta em hectares. H = M * 0.0001

#include <stdio.h>

int main(){


	float area = 0;

	printf("Valor em metros quadrados: ");
	scanf("%f",&area);

	printf("Valor convertido em hectares: %f",area*0.0001);



	return 0;
}