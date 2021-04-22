/*Leia um inteiro e calcule a soma de todos os seus divisores, com exceção dele próprio.*/

#include <stdio.h>

int main(){

	int inteiro = 0, soma = 0, i;

	printf("Digite um inteiro: ");
	scanf("%d",&inteiro);

	printf("Divisores: ");
	for(i=1;i<inteiro;i++){
		if(inteiro%i == 0){
			printf("%d ",i);
			soma+=i;
		};
	};

	printf("\nSoma: %d",soma);


	return 0;
}