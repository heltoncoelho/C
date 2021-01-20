//Leia um valor de um produto e imprima um desconto de 12%

#include <stdio.h>

int main(void){

	float produto;

	printf("Valor do produto: ");
	scanf("%f",&produto);

	printf("Valor com desconto de 12%%: %.2f",produto*0.88);

}