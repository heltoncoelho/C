/*Leia uma data de nascimento na forma dia, mês e ano. Verifique se a data é válida considerando o mês, o número de dias no mês
e o ano que pode ser bissexto.*/

#include <stdio.h>

int main(){

	int dia, mes, ano;

	printf("Digite o dia do mês que você nasceu: ");
	scanf("%d",&dia);

	printf("Digite o mês que você nasceu: ");
	scanf("%d",&mes);

	printf("Digite o ano que você nasceu: ");
	scanf("%d",&ano);

	//verificar se o ano é bissexto (fevereiro tem 29 dias em anos bissextos)
	//verificar se o mes tem 31 dias ou 30 dias.
	//verificar se o dia esta no intervalo entre 0 e 31 para os meses com 31 dias OU 0 e 30 para os demais (menos fevereiro);

	return 0;
}