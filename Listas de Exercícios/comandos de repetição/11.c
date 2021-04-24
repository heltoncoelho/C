/*Ler um numero positivo N e imprimir todos os numero naturais de 0 até N*/

#include <stdio.h>

int main(){

	int numeroN = 0;
	int i;


	while(numeroN<=0){
		printf("Digite um numero inteiro: ");
		scanf("%d",&numeroN);		
	}

	for(i=1;i<=numeroN;i++){
		printf("%d ",i);
	}


	return 0;
}