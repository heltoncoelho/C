//Escreva um programa de ajuda para vendedores. 

#include <stdio.h>

int main(){

	float valor;

	printf("Valor: ");
	scanf("%f",&valor);

	printf("Total a pagar com desconto de 10%%: %.2f\n",valor*0.90);
	printf("Valor da parcela em 3x: %.2f\n",valor/3 );
	printf("Comissao do vendedor sobre valor a vista: %.2f\n",(valor*0.90)*0.05);
	printf("Comissao do vendedor sobre venda parcelada: %.2f\n",valor*0.05);


	return 0;
}