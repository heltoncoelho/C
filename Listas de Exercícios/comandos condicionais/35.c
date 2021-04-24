/*Leia uma data e determine se ela é válida. Leve em consideração que fevereiro tem 29 dias em anos bissextos.*/

#include <stdio.h>

int main(){


	int dia, mes, ano;
	int validaData = 0;	//se igual a 2 ou a 3, temos preenchidas todas as condições para um ano ser dado como válido.

	printf("Dia: ");
	scanf("%d",&dia);

	printf("Mes: ");
	scanf("%d",&mes);

	printf("Ano: ");
	scanf("%d",&ano);

	//verificar se é um dia no intervalo 1~30,comum a todos os meses com exceção de fevereiro.
	if(dia>=1 && dia<=30 && mes!= 2)
		validaData++;


	//se o dia for 31 ele precisa estar naqueles meses com 31 dias do ano.
	if(dia == 31){
		if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12)
			validaData++;
	}

	//o mes precisa estar no intervalo entre 1 e 12
	if(mes<=12 && mes>=1)
		validaData++;

	//se fevereiro tem 29 dias, o ano deve ser bissexto. Verificamos se o ano é bissexto para incrementar 'validaData' com um ponto
	//adicional. 
	if(mes==2 && dia==29){
		if(ano%400 == 0)
			validaData++;
		else if(ano%4 == 0 && ano%100 !=0)
			validaData++;
		else
			printf("Erro: fevereiro tem 29 dias mas o ano nao eh bissexto.");
	}else if(mes ==2 && dia<=29)
			validaData++;

	//grand finale
	if(validaData==2 || validaData==3)
		printf("A data %d/%d/%d eh valida.",dia,mes,ano);
	else		
		printf("A data %d/%d/%d nao eh valida.",dia,mes,ano);


	return 0;
}