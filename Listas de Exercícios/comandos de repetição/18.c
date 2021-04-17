/*Leia uma certa quantidade de numeros e imprima o maior deles e quantas vezes o maior numero foi lido. A quantidade de numeros
a serem lidos deve ser fornecida pelo usuario*/


#include <stdio.h>

int main(){

	int contador = 0;
	int num;
	int qtdNumeros;
	int maior, i;

	printf("Quantos numeros deseja ler? ");
	scanf("%d",&qtdNumeros);

	if(qtdNumeros>0){	//um numero deve servir de parâmetro de comparação, e será o maior por enquanto.
		printf("Numero #1: ");
		scanf("%d",&maior);
	};

	for(i=2;i<=qtdNumeros;i++){	//coleta os numeros até o limite n dado pelo usuario
		printf("Numero #%d: ",i);
		scanf("%d",&num);

		if(num>=maior){	//compara o digitado, se for maior armazena
			maior = num;
		};


	};
	
	//NOTA: FALTA ADICIONAR UM CONTADOR PARA INDICAR QUANTAS VEZES O MAIOR NUMERO FOI DIGITADO. O RESTO ESTA PRONTO.

	printf("Maior numero: %d",maior);


	return 0;
}