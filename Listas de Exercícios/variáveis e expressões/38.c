//Leia o salário de um funcionário e o imprima com um aumento de 25%

#include <stdio.h>

int main(void){

	float salario;

	printf("Salario atual: ");
	scanf("%f",&salario);

	printf("Salario com aumento de 25%%: %.2f",salario*1.25);


}