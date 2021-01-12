//Leia um valor de área em hectares e converta em metro quadrados. M = H * 10000

#include <stdio.h>

int main(){

	float area = 0;

	printf("Area em hectares: ");
	scanf("%f",&area);

	printf("Area em metros quadrados: %f",area*10000);




	return 0;
}