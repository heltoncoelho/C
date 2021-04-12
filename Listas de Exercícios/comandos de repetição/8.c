/*Leia 10 números e escreva o menor valor lido e o maior valor lido*/

#include <stdio.h>

int main(){

	int menor, maior,num;
	int i;

	printf("Você precisara digitar 10 numeros inteiros a seguir.\n");
	printf("Numero # 1: ");
	scanf("%d",&menor);
	maior = menor;

	for(i=2;i<=10;i++){

		printf("Numero # %d: ",i);
		scanf("%d",&num);

		if(num<menor){
			menor = num;
			
		};

		if(num>maior){
			maior = num;			
		};
		
	};

	printf("\nMaior numero digitado: %d\tMenor numero digitado: %d\n",maior,menor);


	return 0;
}