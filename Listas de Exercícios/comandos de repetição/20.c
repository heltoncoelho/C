/*Leia uma sequencia de numeros e determine quais dentre eles são pares. Informe o numero de dados lidos e o numero de valores
pares. O programa deve terminar quando for digitado o numero 1000*/

#include <stdio.h>

int main(){

	int limiteMax;
	int limiteMin;
	int contadorPares = 0;
	int qtdValores;
	int i;

	printf("A seguir você devera entrar com os valores inteiros do intervalo a ser pesquisado\n");
	printf("Se desejar digite '1000' para encerrar.\n");

	printf("Valor inicial: " );
	scanf("%d",&limiteMin);

	if(limiteMin == 1000)
		return 0;

	printf("Valor final: ");
	scanf("%d",&limiteMax);

	if(limiteMax == 1000)
		return 0;

	qtdValores = (limiteMax - limiteMin) - 1; //exlui-se os limites do intervalo

	printf("PARES: ");
	for(i=limiteMin+1;i<limiteMax;i++){

		if(i%2 == 0){
			printf("%d ",i);
			contadorPares++;
		};

	};

	printf("\nO intervalo contem %d valores com %d numeros pares\n",qtdValores,contadorPares);

	return 0;		
}