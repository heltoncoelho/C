/*Dado peso e altura calcule o imc de uma pessoa e mostre sua classificação de acordo com a tabela (pdf)
O imc é calculado dividindo o peso em kg pelo quadrado da altura em metros*/

#include <stdio.h>

int main(){

	float altura,peso,classificacao;

	printf("Peso em kg: ");
	scanf("%f",&peso);

	printf("Altura em metros: ");
	scanf("%f",&altura);

	classificacao = peso / (altura*altura);

	if(classificacao<18.5)
		printf("Abaixo do peso ideal");	
	if(classificacao>=18.6 && classificacao<=24.99)
		printf("Saudavel");
	if(classificacao>=25 && classificacao<=29.99)
		printf("Peso em excesso");
	if(classificacao>=30 && classificacao<=34.99)
		printf("Obesidade grau I");
	if(classificacao>=35 && classificacao<=39.99)
		printf("Obesidade grau II (severa)");
	if(classificacao>=40)
		printf("Obesidade grau III (morbida)");	


	return 0;
}