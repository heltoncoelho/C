/*Leia o código de um produto no cardápio e a quantidade. Calcule o valor a pagar.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

	int  codigo;
	float quantidade;

	printf("Codigo: 100 Produto: cachorro quente Preco: 1.20\n");
	printf("Codigo: 101 Produto: Bauru Simples Preco: 1.30\n");
	printf("Codigo: 102 Produto: Bauru com Ovo Preco: 1.50\n");
	printf("Codigo: 103 Produto: Hamburguer Preco: 1.20\n");
	printf("Codigo: 104 Produto: Cheeseburger Preco: 1.70\n");
	printf("Codigo: 105 Produto: Suco Preco: 2.20\n");
	printf("Codigo: 106 Produto: Refrigerante Preco: 1.00\n");		
	

	printf("Escolha:" );
	scanf("%d",&codigo);

	printf("Quantidade desejada do produto: ");
	scanf("%f",&quantidade);

	switch(codigo){
		case 100: printf("Valor a ser pago: %.2f",quantidade*1.2);break;
		case 101: printf("Valor a ser pago: %.2f",quantidade*1.3);break;
		case 102: printf("Valor a ser pago: %.2f",quantidade*1.5);break;
		case 103: printf("Valor a ser pago: %.2f",quantidade*1.2);break;;
		case 104: printf("Valor a ser pago: %.2f",quantidade*1.7);break;
		case 105: printf("Valor a ser pago: %.2f",quantidade*2.2);break;
		case 106: printf("Valor a ser pago: %.2f",quantidade*1);break;
		default:  printf("Codigo inexistente");
	};


	return 0;
}