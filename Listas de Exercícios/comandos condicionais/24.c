/*Faça um programa no qual o usuario digite o estado de destino e o preço de venda do produto e receba o valor com o imposto.
MG 7%, SP 12%, RJ 15%, MS 8%. Se o estado digitado não for válido mostrar uma mensagem de erro.*/

#include <stdio.h>

int main(){

	float preco;
	int estado = 0;

	printf("Valor de venda do produto: ");
	scanf("%f",&preco);

	printf("Estados de destino \t [1] MG, [2] SP, [3] RJ, [4] MS:");
	scanf("%d",&estado);

	if(estado == 1)
		printf("Valor final do produto: %.2f",preco*1.07);
	else if (estado == 2)
		printf("Valor final do produto: %.2f",preco*1.12);
	else if (estado == 3)
		printf("Valor final do produto: %.2f",preco*1.15);
	else if (estado == 4)
		printf("Valor final do produto: %.2f",preco*1.08);
	else
		printf("Estado fora da area de venda.");


	return 0;
}