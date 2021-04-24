/*Receba um intervalo de numeros e calcule a soma dos numeros pares digitados incluindo os numeros recebidos.
Imprima, alem da soma, a multiplicacao dos numeros impares desse intervalo, incluindo os digitados.*/

#include<stdio.h>

int main(){

	int limiteMax;
	int limiteMin;
	int somaPares = 0;
	int multImpares = 1;
	int i;

	printf("A seguir você devera entrar com os valores inteiros do intervalo a ser pesquisado\n");

	printf("Valor inicial: " );
	scanf("%d",&limiteMin);

	printf("Valor final: ");
	scanf("%d",&limiteMax);


	printf("PARES: ");
	for(i=limiteMin;i<=limiteMax;i++){

		if(i%2 == 0){
			printf("%d ",i);
			somaPares+=i;
		}
	}

	printf("\nIMPARES: ");
	for(i=limiteMin;i<=limiteMax;i++){

		if(i%2 != 0){
			printf("%d ",i);
			multImpares = i*multImpares;
		}
	}


	printf("\nSoma dos numeros pares: %d e multiplicacao dos impares: %d ",somaPares,multImpares);

	return 0;
}