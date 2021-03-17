/*Leia o preço de um produto e escreva o preço novo de acordo com a tabela de aumento (pdf)*/

#include <stdio.h>

int main(){

	float preco;

	printf("Digite o preco do produto: ");
	scanf("%f",&preco);

	if(preco<=50 && preco >0)
		printf("Novo preco: %.2f",preco*1.05);
	else if(preco>50 && preco<=100)
		printf("Novo preco: %.2f",preco*1.10);
	else if(preco>100)
		printf("Novo preco: %.2f",preco*1.15);
	else
		printf("Valor invalido.")	;


	return 0;
}