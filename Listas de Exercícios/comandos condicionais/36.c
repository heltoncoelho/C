/*Dado o valor da venda imprima a comissão devida ao vendedor de acordo com a tabela (pdf)*/

#include <stdio.h>

int main(){

	float valorVendaMensal;

	printf("Valor total das vendas no mes: ");
	scanf("%f",&valorVendaMensal);

	if(valorVendaMensal>=100000)
		printf("Comissao do vendedor: %.2f",700+(valorVendaMensal*1.16));
	else if (valorVendaMensal<100000 && valorVendaMensal>=80000)
		printf("Comissao do vendedor: %.2f",650+(valorVendaMensal*1.14));
	else if (valorVendaMensal<80000 && valorVendaMensal>=60000)
		printf("Comissao do vendedor: %.2f",600+(valorVendaMensal*1.14));
	else if (valorVendaMensal<60000 && valorVendaMensal>=40000)
		printf("Comissao do vendedor: %.2f",550+(valorVendaMensal*1.14));
	else if (valorVendaMensal<40000 && valorVendaMensal>=20000)
		printf("Comissao do vendedor: %.2f",500+(valorVendaMensal*1.14));
	else if (valorVendaMensal<20000)
		printf("Comissao do vendedor: %.2f",400+(valorVendaMensal*1.14));
	else
		printf("Erro. Dados invalidos");


	return 0;
}