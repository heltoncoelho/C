/*Leia o custo de fábrica de um automóvel e calcule seu custo final ao consumidor. Inclua a comissão ao distribuidor e 
os impostos conforme mostrados na tabela (pdf)*/

#include <stdio.h>

int main(){

	float custoDeFabrica;

	printf("Entre com o custo de fabricacao do automovel: ");
	scanf("%f",&custoDeFabrica);

	if(custoDeFabrica<=12000)
		printf("Preco final ao consumidor: %.2f",custoDeFabrica*1.05);
	if(custoDeFabrica>12000 && custoDeFabrica<25000)
		printf("Preco final ao consumidor: %.2f",custoDeFabrica*1.10 + custoDeFabrica*0.15);
	if(custoDeFabrica>25000)
		printf("Preco final ao consumidor: %.2f",custoDeFabrica*1.15 + custoDeFabrica*0.20);

	return 0;
}