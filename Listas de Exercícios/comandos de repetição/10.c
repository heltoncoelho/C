/*Calcule e mostre a soma dos primeiros 50 números pares*/

#include<stdio.h>

int main(){

	int soma = 0;
	int i;

	for(i=1;i<=100;i++){
		if(i%2==0){
			printf("%d ",i);
			soma+=i;
		};
	};

	printf("\nSoma dos 50 primeiros numeros pares: %d\n",soma);



	return 0;
}